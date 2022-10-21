//
// Created by colli on 10/8/2022.
//

#include "SchemesAutomaton.h"
#include <iostream>

void SchemesAutomaton::S0(const std::string& input) {
    if (input[index] == 'S') {
        inputRead++;
        index++;
        S1(input);
    }
    else {
        Serr();
    }
}

void SchemesAutomaton::S1(const std::string& input) {
    if (input[index] == 'c') {
        inputRead++;
        index++;
        S2(input);
        //std::cout << "1 COLONDASH\n";
    }
    else {
        Serr();
    }
}

void SchemesAutomaton::S2(const std::string& input) {
    if (input[index] == 'h') {
        inputRead++;
        index++;
        S3(input);
    }
    else {
        Serr();
    }
}

void SchemesAutomaton::S3(const std::string& input) {
    if (input[index] == 'e') {
        inputRead++;
        index++;
        S4(input);
    }
    else {
        Serr();
    }
}

void SchemesAutomaton::S4(const std::string& input) {
    if (input[index] == 'm') {
        inputRead++;
        index++;
        S5(input);
    }
    else {
        Serr();
    }
}

void SchemesAutomaton::S5(const std::string& input) {
    if (input[index] == 'e') {
        inputRead++;
        index++;
        S6(input);
    }
    else {
        Serr();
    }
}

void SchemesAutomaton::S6(const std::string& input) {
    if (input[index] == 's') {
        inputRead++;
    }
    else {
        Serr();
    }
}