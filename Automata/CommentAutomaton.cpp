//
// Created by colli on 10/8/2022.
//

#include "CommentAutomaton.h"
#include <iostream>

void CommentAutomaton::S0(const std::string& input) {
    if (input[index] == '#') {
        if (input[index+1] != '|') {
            inputRead++;
            index++;
            S1(input);
        }
    }
    else {
        Serr();
    }
}

void CommentAutomaton::S1(const std::string& input) {
    if (index > input.size()-1) {undef = true; return;}
    if (input[index] != '\n') {
        inputRead++;
        index++;
        S1(input);
        //std::cout << "1 COLONDASH\n";
    }
    else {
        return;
    }
}