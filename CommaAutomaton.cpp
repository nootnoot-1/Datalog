#include "CommaAutomaton.h"
#include <iostream>

void CommaAutomaton::S0(const std::string& input) {
    if (input[index] == ',') {
        inputRead = 1;
        std::cout << "1 COMMA" << std::endl;
    }
    else {
        Serr();
    }
}