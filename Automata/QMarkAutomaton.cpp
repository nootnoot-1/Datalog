//
// Created by colli on 10/5/2022.
//

#include "QMarkAutomaton.h"
#include <iostream>

void QMarkAutomaton::S0(const std::string& input) {
    if (input[index] == '?') {
        inputRead = 1;
        //std::cout << "1 COMMA\n";
    }
    else {
        Serr();
    }
}