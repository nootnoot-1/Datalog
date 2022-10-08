//
// Created by colli on 10/5/2022.
//

#include "AddAutomaton.h"
#include <iostream>

void AddAutomaton::S0(const std::string& input) {
    if (input[index] == '+') {
        inputRead = 1;
        //std::cout << "1 COMMA\n";
    }
    else {
        Serr();
    }
}