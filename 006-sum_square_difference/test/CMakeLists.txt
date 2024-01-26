cmake_minimum_required(VERSION 3.14)
project(sum_square_difference_test)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED 20)

add_subdirectory(${PROJECT_BINARY_DIR}/../../../googletest-7c07a863693b0c831f80473f7c6905d7e458682c build)

enable_testing()

add_executable(
  sum_square_difference_test
  sum_square_difference_test.cpp
  ../sum_square_difference.cpp
)

target_link_libraries(
  sum_square_difference_test
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(sum_square_difference_test)
