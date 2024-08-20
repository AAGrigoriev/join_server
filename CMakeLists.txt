cmake_minimum_required(VERSION 3.20)

project(join_server LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(pegtl REQUIRED)

add_executable(join_server main.cpp)

target_link_libraries(join_server taocpp::pegtl)

