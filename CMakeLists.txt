cmake_minimum_required(VERSION 3.16)
project(Datalog)

set(CMAKE_CXX_STANDARD 14)

file(GLOB SOURCES
        *.h
        *.cpp
        )

add_executable(Datalog ${SOURCES})
