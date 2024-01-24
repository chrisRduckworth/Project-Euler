import os, re, sys, subprocess

# find challenge number
challenge_numbers = [re.search(r'^\d{3}', f) for f in os.listdir()]
challenge_numbers = [int(m[0], 10) for m in challenge_numbers if m is not None]
new_challenge_number = f"{max(challenge_numbers) + 1:03d}"

# make directories
dir_name = f"{new_challenge_number}-{sys.argv[1]}"
os.makedirs(dir_name)
os.makedirs(f"{dir_name}/build")
os.makedirs(f"{dir_name}/test")
os.makedirs(f"{dir_name}/test/build")

# create files
with open(f"{dir_name}/{sys.argv[1]}.cpp", "x") as f:
    f.write(f"#include \"{sys.argv[1]}.hpp\"")

open(f"{dir_name}/{sys.argv[1]}.hpp", "x")

with open(f"{dir_name}/test/{sys.argv[1]}_test.cpp", "x") as f:
    f.write(f"""#include <gtest/gtest.h>
#include \"../{sys.argv[1]}.hpp\"
""")

with open(f"{dir_name}/main.cpp", "x") as f:
    f.write(f"""#include <iostream>
#include \"{sys.argv[1]}.hpp\"

int main() {{

}}
""")

cmake_main = f"""project({sys.argv[1]})

add_executable(
  {sys.argv[1]}
  {sys.argv[1]}.cpp
  main.cpp
)
"""

with open(f"{dir_name}/CMakeLists.txt", "x") as f:
    f.write(cmake_main)

cmake_test = f"""cmake_minimum_required(VERSION 3.14)
project({sys.argv[1]}_test)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(${{PROJECT_BINARY_DIR}}/../../../googletest-7c07a863693b0c831f80473f7c6905d7e458682c build)

enable_testing()

add_executable(
  {sys.argv[1]}_test
  {sys.argv[1]}_test.cpp
  ../{sys.argv[1]}.cpp
)

target_link_libraries(
  {sys.argv[1]}_test
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests({sys.argv[1]}_test)
"""

with open(f"{dir_name}/test/CMakeLists.txt", "x") as f:
    f.write(cmake_test)

# run cmake to create build files
subprocess.run(["cmake", "-B", f"./{dir_name}/build", "-S", f"./{dir_name}"])
subprocess.run(["cmake", "-B", f"./{dir_name}/test/build", "-S", f"./{dir_name}/test"])
