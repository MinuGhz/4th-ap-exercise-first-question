cmake_minimum_required(VERSION 3.28)
project(4th_ap_repository)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(4th_ap_repository
        address.cpp
        address.h
        employee.cpp
        employee.h
        main.cpp
        person.cpp
        person.h)
