//
// Created by colli on 10/8/2022.
//

#include "CommentAutomaton.h"
#include <iostream>

void CommentAutomaton::S0(const std::string& input) {
    if (input[index] == ':') {
        inputRead++;
        index++;
        S1(input);
    }
    else {
        Serr();
    }
}

void CommentAutomaton::S1(const std::string& input) {
    if (input[index] == '-') {
        inputRead++;
        //std::cout << "1 COLONDASH\n";
    }
    else {
        Serr();
    }
}