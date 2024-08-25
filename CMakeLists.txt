cmake_minimum_required(VERSION 3.20)

project(join_server LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(pegtl REQUIRED)
find_package(Boost COMPONENTS COMPONENTS program_options system REQUIRED)

add_executable(join_server
    main.cpp
    parsing.hpp
    network.hpp
    network.cpp
    table.cpp
    table.hpp
    database_error.cpp
    database_error.hpp
    database.hpp
    database.cpp
)

target_link_libraries(join_server taocpp::pegtl ${Boost_LIBRARIES})

