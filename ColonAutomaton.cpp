#include "ColonAutomaton.h"
#include <iostream>

void ColonAutomaton::S0(const std::string& input) {
    if (input[index] == ':') {
        inputRead = 1;
        //std::cout << "1 COLON\n";
    }
    else {
        Serr();
    }
}