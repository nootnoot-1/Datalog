//
// Created by colli on 10/8/2022.
//

#include "IDAutomaton.h"
#include <iostream>

void IDAutomaton::S0(const std::string& input) {
    if (input[index] == ':') {
        inputRead++;
        index++;
        S1(input);
    }
    else {
        Serr();
    }
}

void IDAutomaton::S1(const std::string& input) {
    if (input[index] == '-') {
        inputRead++;
        //std::cout << "1 COLONDASH\n";
    }
    else {
        Serr();
    }
}