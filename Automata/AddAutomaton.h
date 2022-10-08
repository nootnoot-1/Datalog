//
// Created by colli on 10/5/2022.
//

#ifndef DATALOG_ADDAUTOMATON_H
#define DATALOG_ADDAUTOMATON_H

#include "../Automaton.h"

class AddAutomaton : public Automaton
{
public:
    AddAutomaton() : Automaton(TokenType::ADD) {}  // Call the base constructor

    void S0(const std::string& input);
};


#endif //DATALOG_ADDAUTOMATON_H
