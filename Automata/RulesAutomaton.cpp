//
// Created by colli on 10/8/2022.
//

#include "RulesAutomaton.h"
#include <iostream>

void RulesAutomaton::S0(const std::string& input) {
    if (input[index] == 'R') {
        inputRead++;
        index++;
        S1(input);
    }
    else {
        Serr();
    }
}

void RulesAutomaton::S1(const std::string& input) {
    if (input[index] == 'U') {
        inputRead++;
        index++;
        //std::cout << "1 COLONDASH\n";
        S2(input);
    }
    else {
        Serr();
    }
}

void RulesAutomaton::S2(const std::string& input) {
    if (input[index] == 'L') {
        inputRead++;
        index++;
        S3(input);
    }
    else {
        Serr();
    }
}

void RulesAutomaton::S3(const std::string& input) {
    if (input[index] == 'E') {
        inputRead++;
        index++;
        S4(input);
    }
    else {
        Serr();
    }
}

void RulesAutomaton::S4(const std::string& input) {
    if (input[index] == 'S') {
        inputRead++;
    }
    else {
        Serr();
    }
}