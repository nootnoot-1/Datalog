//
// Created by colli on 10/8/2022.
//

#include "FactsAutomaton.h"
#include <iostream>

void FactsAutomaton::S0(const std::string& input) {
    if (input[index] == 'F') {
        inputRead++;
        index++;
        S1(input);
    }
    else {
        Serr();
    }
}

void FactsAutomaton::S1(const std::string& input) {
    if (input[index] == 'a') {
        inputRead++;
        index++;
        //std::cout << "1 COLONDASH\n";
        S2(input);
    }
    else {
        Serr();
    }
}

void FactsAutomaton::S2(const std::string& input) {
    if (input[index] == 'c') {
        inputRead++;
        index++;
        //std::cout << "1 COLONDASH\n";
        S3(input);
    }
    else {
        Serr();
    }
}

void FactsAutomaton::S3(const std::string& input) {
    if (input[index] == 't') {
        inputRead++;
        index++;
        //std::cout << "1 COLONDASH\n";
        S4(input);
    }
    else {
        Serr();
    }
}

void FactsAutomaton::S4(const std::string& input) {
    if (input[index] == 's') {
        inputRead++;
        //std::cout << "1 COLONDASH\n";
    }
    else {
        Serr();
    }
}