//
// Created by colli on 10/5/2022.
//

#ifndef DATALOG_MULTIPLYAUTOMATON_H
#define DATALOG_MULTIPLYAUTOMATON_H

#include "../Automaton.h"

class MultiplyAutomaton : public Automaton
{
public:
    MultiplyAutomaton() : Automaton(TokenType::MULTIPLY) {}  // Call the base constructor

    void S0(const std::string& input);
};

#endif //DATALOG_MULTIPLYAUTOMATON_H
