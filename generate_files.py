import os, re, sys, subprocess

# find challenge number
challenge_numbers = [re.search(r'^\d{3}', f) for f in os.listdir()]
challenge_numbers = [int(m[0], 10) for m in challenge_numbers if m is not None]
new_challenge_number = f"{max(challenge_numbers) + 1:03d}"

# make directories
dir_name = f"{new_challenge_number}-{sys.argv[1]}"
os.makedirs(dir_name)
os.makedirs(f"{dir_name}/build")

# create files
with open(f"{dir_name}/{new_challenge_number}.cpp", "x") as f:
    f.write(f"#include \"{new_challenge_number}.hpp\"")

open(f"{dir_name}/{new_challenge_number}.hpp", "x")

with open(f"{dir_name}/{new_challenge_number}_test.cpp", "x") as f:
    f.write(f"""#include <gtest/gtest.h>
#include \"{new_challenge_number}.hpp\"
""")

with open(f"{dir_name}/main.cpp", "x") as f:
    f.write(f"""#include <iostream>
#include \"{new_challenge_number}.hpp\"

int main() {{

}}
""")

cmake = f"""cmake_minimum_required(VERSION 3.14)
project({new_challenge_number}-{sys.argv[1]})

option(TEST "run google test" OFF)

if(TEST)
  # GoogleTest requires at least C++14
  set(CMAKE_CXX_STANDARD 14)
  set(CMAKE_CXX_STANDARD_REQUIRED ON)

  add_subdirectory(${{PROJECT_BINARY_DIR}}/../../googletest-7c07a863693b0c831f80473f7c6905d7e458682c build)

  enable_testing()

  add_executable(
    {new_challenge_number}_test
    {new_challenge_number}_test.cpp
    {new_challenge_number}.cpp
  )
  target_link_libraries(
    {new_challenge_number}_test
    GTest::gtest_main
  )

  include(GoogleTest)
  gtest_discover_tests({new_challenge_number}_test)
else()
  add_executable(
    {new_challenge_number}
    {new_challenge_number}.cpp
    main.cpp
  )
endif()"""

with open(f"{dir_name}/CMakeLists.txt", "x") as f:
    f.write(cmake)

# run cmake to create build files
subprocess.run([f"cmake", "-B", f"./{dir_name}/build", "-S", f"./{dir_name}"])
