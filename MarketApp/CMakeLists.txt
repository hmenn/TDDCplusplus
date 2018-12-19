cmake_minimum_required(VERSION 3.13)
project(StringCalculator)

set(CMAKE_CXX_STANDARD 11)

include_directories("/usr/local/include")

link_directories("/usr/local/lib")

set(GTEST_LINK gtest gtest_main gmock_main gmock)

#BasketTest.cpp
add_executable(BasketTest BasketServiceTest.cpp)
#add_executable(BasketTest BasketTest.cpp)


target_link_libraries(BasketTest pthread ${GTEST_LINK})
