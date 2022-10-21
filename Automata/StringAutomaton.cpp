#include "StringAutomaton.h"
#include <iostream>

void StringAutomaton::S0(const std::string& input) {
    // std::cout << input.size() << ": " << index << "1" << std::endl;
    if (index > input.size()) {Serr();}
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
    //if (input.empty()) {Serr(); // make an undefined Token}
    if (index > input.size()-1) {undef = true; return;}
    // TODO fix this
    if (input[index] == '\'') {
        inputRead++;
        index++;
        S2(input);
    }
    else {
        if (input[index] == '\n') {++newLines;}
        inputRead++;
        index++;
        S1(input);
        //Serr();
    }
}

void StringAutomaton::S2(const std::string& input) {
    //std::cout << input.size() << ": " << index << "3" << std::endl;
    if (index > input.size()) {Serr();}
    if (input.empty()) {Serr();}
    if (input[index] == '\'') {
        inputRead++;
        index++;
        S1(input);
        //std::cout << "1 COLONDASH\n";
    } else {
        //Serr();
    }
}