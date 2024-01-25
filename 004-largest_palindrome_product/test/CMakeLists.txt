cmake_minimum_required(VERSION 3.14)
project(largest_palindrome_product_test)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(${PROJECT_BINARY_DIR}/../../../googletest-7c07a863693b0c831f80473f7c6905d7e458682c build)

enable_testing()

add_executable(
  largest_palindrome_product_test
  largest_palindrome_product_test.cpp
  ../largest_palindrome_product.cpp
)

target_link_libraries(
  largest_palindrome_product_test
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(largest_palindrome_product_test)
