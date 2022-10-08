//
// Created by colli on 10/5/2022.
//

#ifndef DATALOG_PERIOD_H
#define DATALOG_PERIOD_H

#include "../Automaton.h"

class PeriodAutomaton : public Automaton
{
public:
    PeriodAutomaton() : Automaton(TokenType::PERIOD) {}  // Call the base constructor

    void S0(const std::string& input);
};


#endif //DATALOG_PERIOD_H
