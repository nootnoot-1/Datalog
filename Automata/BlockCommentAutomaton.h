//
// Created by colli on 10/8/2022.
//

#ifndef DATALOG_BLOCKCOMMENTAUTOMATON_H
#define DATALOG_BLOCKCOMMENTAUTOMATON_H

#include "../Automaton.h"

class BlockCommentAutomaton : public Automaton
{
private:
    void S1(const std::string& input);

public:
    BlockCommentAutomaton() : Automaton(TokenType::COMMENT) {}  // Call the base constructor

    void S0(const std::string& input);
};


#endif //DATALOG_BLOCKCOMMENTAUTOMATON_H
