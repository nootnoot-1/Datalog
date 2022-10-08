//
// Created by colli on 10/8/2022.
//

#include "QueriesAutomaton.h"
#include <iostream>

void QueriesAutomaton::S0(const std::string& input) {
    if (input[index] == 'Q') {
        inputRead++;
        index++;
        S1(input);
    }
    else {
        Serr();
    }
}

void QueriesAutomaton::S1(const std::string& input) {
    if (input[index] == 'U') {
        inputRead++;
        //std::cout << "1 COLONDASH\n";
        index++;
        S2(input);
    }
    else {
        Serr();
    }
}

void QueriesAutomaton::S2(const std::string& input) {
    if (input[index] == 'E') {
        inputRead++;
        index++;
        S3(input);
    }
    else {
        Serr();
    }
}

void QueriesAutomaton::S3(const std::string& input) {
    if (input[index] == 'R') {
        inputRead++;
        index++;
        S4(input);
    }
    else {
        Serr();
    }
}

void QueriesAutomaton::S4(const std::string& input) {
    if (input[index] == 'I') {
        inputRead++;
        index++;
        S5(input);
    }
    else {
        Serr();
    }
}

void QueriesAutomaton::S5(const std::string& input) {
    if (input[index] == 'E') {
        inputRead++;
        index++;
        S6(input);
    }
    else {
        Serr();
    }
}

void QueriesAutomaton::S6(const std::string& input) {
    if (input[index] == 'S') {
        inputRead++;
    }
    else {
        Serr();
    }
}