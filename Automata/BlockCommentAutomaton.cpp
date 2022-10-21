//
// Created by colli on 10/8/2022.
//

#include "BlockCommentAutomaton.h"
#include <iostream>

void BlockCommentAutomaton::S0(const std::string& input) {
    if (input[index] == '#') {
        inputRead++;
        index++;
        S1(input);
    }
    else {
        Serr();
    }
}

void BlockCommentAutomaton::S1(const std::string& input) {
    if (input[index] == '|') {
        inputRead++;
        index++;
        S2(input);
    }
    else {
        Serr();
    }
}

void BlockCommentAutomaton::S2(const std::string& input) {
    if (index > input.size()-1) {undef = true; return;}
    if (input[index] != '|') {
        inputRead++;
        index++;
        S2(input);
        if (input[index] == '\n') {
            ++newLines;
        }
    }
    else {
        inputRead++;
        index++;
        S3(input);
    }
}

void BlockCommentAutomaton::S3(const std::string& input) {
    if (input[index] == '#') {
        inputRead++;
    }
    else {
        S2(input);
    }
}