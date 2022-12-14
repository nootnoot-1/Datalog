//
// Created by colli on 10/8/2022.
//

#ifndef DATALOG_IDAUTOMATON_H
#define DATALOG_IDAUTOMATON_H

#include "../Automaton.h"

class IDAutomaton : public Automaton
{
private:
    void S1(const std::string& input);
    void S2(const std::string& input);

public:
    IDAutomaton() : Automaton(TokenType::ID) {}  // Call the base constructor

    void S0(const std::string& input);
};


#endif //DATALOG_IDAUTOMATON_H
