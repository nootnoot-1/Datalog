//
// Created by colli on 10/5/2022.
//

#ifndef DATALOG_RIGHTPARENAUTOMATON_H
#define DATALOG_RIGHTPARENAUTOMATON_H

#include "../Automaton.h"

class RightParenAutomaton : public Automaton
{
public:
    RightParenAutomaton() : Automaton(TokenType::RIGHT_PAREN) {}  // Call the base constructor

    void S0(const std::string& input);
};


#endif //DATALOG_RIGHTPARENAUTOMATON_H
