#include "ColonDashAutomaton.h"
#include <iostream>

void ColonDashAutomaton::S0(const std::string& input) {
    if (input[index] == ':') {
        inputRead++;
        index++;
        S1(input);
    }
    else {
        Serr();
    }
}

void ColonDashAutomaton::S1(const std::string& input) {
    if (input[index] == '-') {
        inputRead++;
        //std::cout << "1 COLONDASH\n";
    }
    else {
        Serr();
    }
}