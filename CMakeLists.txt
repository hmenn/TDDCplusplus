cmake_minimum_required(VERSION 3.13)
project(StringCalculator)

set(CMAKE_CXX_STANDARD 11)

include_directories("/usr/local/include")

link_directories("/usr/local/lib")

set(GTEST_LINK gtest gtest_main)

add_executable(StringCalculator StringCalculatorTest.cpp StringCalculatorTest.h StringCalculator.cpp StringCalculator.h)

target_link_libraries(StringCalculator pthread ${GTEST_LINK})

