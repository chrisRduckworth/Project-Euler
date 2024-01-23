cmake_minimum_required(VERSION 3.14)
project(002-Even_Fibonacci_Numbers)

option(TEST "run google test" OFF)

if(TEST)
  # GoogleTest requires at least C++14
  set(CMAKE_CXX_STANDARD 14)
  set(CMAKE_CXX_STANDARD_REQUIRED ON)

  add_subdirectory(${PROJECT_BINARY_DIR}/../../googletest-7c07a863693b0c831f80473f7c6905d7e458682c build)

  enable_testing()

  add_executable(
    002_test
    002_test.cpp
    002.cpp
  )
  target_link_libraries(
    002_test
    GTest::gtest_main
  )

  include(GoogleTest)
  gtest_discover_tests(002_test)
else()
  add_executable(
    002
    002.cpp
    main.cpp
  )
endif()