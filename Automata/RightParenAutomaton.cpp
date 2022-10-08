//
// Created by colli on 10/5/2022.
//

#include "RightParenAutomaton.h"
#include <iostream>

void RightParenAutomaton::S0(const std::string& input) {
    if (input[index] == ')') {
        inputRead = 1;
        //std::cout << "1 COMMA\n";
    }
    else {
        Serr();
    }
}