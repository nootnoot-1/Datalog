//
// Created by colli on 10/8/2022.
//

#ifndef DATALOG_STRINGAUTOMATON_H
#define DATALOG_STRINGAUTOMATON_H

#include "../Automaton.h"

class StringAutomaton : public Automaton
{
private:
    void S1(const std::string& input);
    void S2(const std::string& input);

public:
    StringAutomaton() : Automaton(TokenType::STRING) {}  // Call the base constructor

    void S0(const std::string& input);
};


#endif //DATALOG_STRINGAUTOMATON_H
