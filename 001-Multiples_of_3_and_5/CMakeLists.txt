cmake_minimum_required(VERSION 3.14)
project(001-Multiples_of_3_and_5)

option(TEST "run google test" OFF)

if(TEST)
  # GoogleTest requires at least C++14
  set(CMAKE_CXX_STANDARD 14)
  set(CMAKE_CXX_STANDARD_REQUIRED ON)

  add_subdirectory(${PROJECT_BINARY_DIR}/../../googletest-7c07a863693b0c831f80473f7c6905d7e458682c build)

  enable_testing()

  add_executable(
    001_test
    001_test.cpp
    001.cpp
  )
  target_link_libraries(
    001_test
    GTest::gtest_main
  )

  include(GoogleTest)
  gtest_discover_tests(001_test)
else()
  add_executable(001
    001.cpp
    main.cpp
  )
endif()
