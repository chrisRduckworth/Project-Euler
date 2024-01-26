cmake_minimum_required(VERSION 3.14)
project(largest_product_in_a_series_test)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED 20)

add_subdirectory(${PROJECT_BINARY_DIR}/../../../googletest-7c07a863693b0c831f80473f7c6905d7e458682c build)

enable_testing()

add_executable(
  largest_product_in_a_series_test
  largest_product_in_a_series_test.cpp
  ../largest_product_in_a_series.cpp
)

target_link_libraries(
  largest_product_in_a_series_test
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(largest_product_in_a_series_test)
