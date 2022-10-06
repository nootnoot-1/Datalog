cmake_minimum_required(VERSION 3.16)
project(Datalog)

set(CMAKE_CXX_STANDARD 14)

add_executable(Datalog main.cpp Lexer.cpp Token.cpp Automaton.h ColonDashAutomaton.cpp ColonAutomaton.cpp CommaAutomaton.cpp CommaAutomaton.h)
