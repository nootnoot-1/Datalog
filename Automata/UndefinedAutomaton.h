//
// Created by colli on 10/12/2022.
//

#ifndef DATALOG_UNDEFINEDAUTOMATON_H
#define DATALOG_UNDEFINEDAUTOMATON_H

#include "../Automaton.h"

class UndefinedAutomaton : public Automaton
{
public:
    UndefinedAutomaton() : Automaton(TokenType::UNDEFINED) {}  // Call the base constructor

    void S0(const std::string& input);
};

#endif //DATALOG_UNDEFINEDAUTOMATON_H
