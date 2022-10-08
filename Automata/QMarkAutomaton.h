//
// Created by colli on 10/5/2022.
//

#ifndef DATALOG_QMARKAUTOMATON_H
#define DATALOG_QMARKAUTOMATON_H

#include "../Automaton.h"

class QMarkAutomaton : public Automaton
{
public:
    QMarkAutomaton() : Automaton(TokenType::Q_MARK) {}  // Call the base constructor

    void S0(const std::string& input);
};


#endif //DATALOG_QMARKAUTOMATON_H
