//
// Created by colli on 10/8/2022.
//

#ifndef DATALOG_COMMENTAUTOMATON_H
#define DATALOG_COMMENTAUTOMATON_H

#include "../Automaton.h"

class CommentAutomaton : public Automaton
{
private:
    void S1(const std::string& input);

public:
    CommentAutomaton() : Automaton(TokenType::COMMENT) {}  // Call the base constructor

    void S0(const std::string& input);
};


#endif //DATALOG_COMMENTAUTOMATON_H
