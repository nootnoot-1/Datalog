//
// Created by colli on 10/5/2022.
//

#ifndef DATALOG_LEFTPARENAUTOMATON_H
#define DATALOG_LEFTPARENAUTOMATON_H

#include "../Automaton.h"

class LeftParenAutomaton : public Automaton
{
public:
    LeftParenAutomaton() : Automaton(TokenType::LEFT_PAREN) {}  // Call the base constructor

    void S0(const std::string& input);
};


#endif //DATALOG_LEFTPARENAUTOMATON_H
