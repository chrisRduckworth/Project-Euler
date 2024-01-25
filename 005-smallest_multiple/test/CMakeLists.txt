cmake_minimum_required(VERSION 3.14)
project(smallest_multiple_test)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(${PROJECT_BINARY_DIR}/../../../googletest-7c07a863693b0c831f80473f7c6905d7e458682c build)

enable_testing()

add_executable(
  smallest_multiple_test
  smallest_multiple_test.cpp
  ../smallest_multiple.cpp
)

target_link_libraries(
  smallest_multiple_test
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(smallest_multiple_test)
