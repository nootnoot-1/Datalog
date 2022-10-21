//
// Created by colli on 10/8/2022.
//

#include "IDAutomaton.h"
#include <iostream>

void IDAutomaton::S0(const std::string& input) {
    if (isalpha(input[index])) {
        inputRead++;
        index++;
        S1(input);
    }
    else {
        Serr();
    }
}

void IDAutomaton::S1(const std::string& input) {
    if (isalpha(input[index]) or std::isdigit(input[index])) {
        inputRead++;
        index++;
        S1(input);
    }
    else {
        S2(input);
    }
}

void IDAutomaton::S2(const std::string& input) {}