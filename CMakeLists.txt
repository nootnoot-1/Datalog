cmake_minimum_required(VERSION 3.16)
project(Datalog)

set(CMAKE_CXX_STANDARD 14)

add_executable(Datalog main.cpp Lexer.cpp Token.cpp Automaton.h Automata/ColonDashAutomaton.cpp Automata/ColonAutomaton.cpp Automata/CommaAutomaton.cpp Automata/CommaAutomaton.h Automata/PERIOD.cpp Automata/PERIOD.h Automata/QMarkAutomaton.cpp Automata/QMarkAutomaton.h Automata/LeftParenAutomaton.cpp Automata/LeftParenAutomaton.h Automata/RightParenAutomaton.cpp Automata/RightParenAutomaton.h Automata/MultiplyAutomaton.cpp Automata/MultiplyAutomaton.h Automata/AddAutomaton.cpp Automata/AddAutomaton.h Automata/QueriesAutomaton.cpp Automata/QueriesAutomaton.h Automata/SchemesAutomaton.cpp Automata/SchemesAutomaton.h Automata/FactsAutomaton.cpp Automata/FactsAutomaton.h Automata/RulesAutomaton.cpp Automata/RulesAutomaton.h Automata/IDAutomaton.cpp Automata/IDAutomaton.h Automata/StringAutomaton.cpp Automata/StringAutomaton.h Automata/CommentAutomaton.cpp Automata/CommentAutomaton.h Automata/BlockCommentAutomaton.cpp Automata/BlockCommentAutomaton.h)
