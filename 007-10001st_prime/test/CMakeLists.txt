cmake_minimum_required(VERSION 3.14)
project(10001st_prime_test)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED 20)

add_subdirectory(${PROJECT_BINARY_DIR}/../../../googletest-7c07a863693b0c831f80473f7c6905d7e458682c build)

enable_testing()

add_executable(
  10001st_prime_test
  10001st_prime_test.cpp
  ../10001st_prime.cpp
)

target_link_libraries(
  10001st_prime_test
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(10001st_prime_test)
