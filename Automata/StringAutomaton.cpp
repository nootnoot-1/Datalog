//
// Created by colli on 10/8/2022.
//

#include "StringAutomaton.h"
#include <iostream>

void StringAutomaton::S0(const std::string& input) {
    if (input[index] == '\'') {
        inputRead++;
        index++;
        S1(input);
    }
    else {
        Serr();
    }
}

void StringAutomaton::S1(const std::string& input) {
    if (input.empty()) {Serr();}
    // TODO fix this
    if (input[index] == '\'') {
        inputRead++;
        index++;
        S2(input);
    }
    else {
        inputRead++;
        index++;
        S1(input);
        //Serr();
    }
}

void StringAutomaton::S2(const std::string& input) {
    if (input[index] == '\'') {
        inputRead++;
        index++;
        S1(input);
        //std::cout << "1 COLONDASH\n";
    } else {
        //Serr();
    }
}