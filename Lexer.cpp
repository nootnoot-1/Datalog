#include "Lexer.h"
#include "Automata/ColonAutomaton.h"
#include "Automata/ColonDashAutomaton.h"
#include "Automata/CommaAutomaton.h"
#include "Automata/PERIOD.h"
#include "Automata/QMarkAutomaton.h"
#include "Automata/LeftParenAutomaton.h"
#include "Automata/RightParenAutomaton.h"
#include "Automata/MultiplyAutomaton.h"
#include "Automata/AddAutomaton.h"
#include "Automata/SchemesAutomaton.h"
#include "Automata/FactsAutomaton.h"
#include "Automata/RulesAutomaton.h"
#include "Automata/QueriesAutomaton.h"
#include "Automata/IDAutomaton.h"
#include "Automata/StringAutomaton.h"
#include "Automata/CommentAutomaton.h"
#include "Automata/BlockCommentAutomaton.h"
#include <iostream>

Lexer::Lexer() {
    CreateAutomata();
}

Lexer::~Lexer() {
    // TODO: need to clean up the memory in `automata` and `tokens`
}

void Lexer::CreateAutomata() {
    automata.push_back(new ColonAutomaton());
    automata.push_back(new ColonDashAutomaton());
    automata.push_back(new CommaAutomaton());
    automata.push_back(new PeriodAutomaton());
    automata.push_back(new QMarkAutomaton());
    automata.push_back(new LeftParenAutomaton());
    automata.push_back(new RightParenAutomaton());
    automata.push_back(new MultiplyAutomaton());
    automata.push_back(new AddAutomaton());
    automata.push_back(new SchemesAutomaton());
    automata.push_back(new FactsAutomaton());
    automata.push_back(new RulesAutomaton());
    automata.push_back(new QueriesAutomaton());
    automata.push_back(new IDAutomaton());
    automata.push_back(new StringAutomaton());
    automata.push_back(new CommentAutomaton());
    automata.push_back(new BlockCommentAutomaton());
    // TODO: Add the other needed automata here
}

void Lexer::Run(std::string& input) {
    // TODO: FIX "SCHEMES\n" Undefined token bug, "SCHEMES\n": has fine output
    // TODO: WHAT output should "SCHEMRULESES" have?
    int lineNumber = 1;
    while (!input.empty()) {
        std::cout << input << std::endl;
        SpaceChecker(input);
        int maxRead = 0;
        auto maxAutomaton = automata.at(0);
        for (int i = 0; i < automata.size(); ++i) {
            int inputRead = automata.at(i)->Start(input);
            if (inputRead > maxRead) {
                maxRead = inputRead;
                maxAutomaton = automata.at(i);
            }
        }
        if (maxRead > 0) {
            auto newToken = maxAutomaton->CreateToken(input, lineNumber);
            lineNumber = lineNumber + maxAutomaton->NewLinesRead();
            tokens.push_back(newToken);
        } else {
            maxRead = 1;
            std::string desc = "";
            desc.push_back(input[0]);
            auto newToken = new Token(TokenType::UNDEFINED, desc, lineNumber);
            tokens.push_back(newToken);
        }
        input.erase(0,maxRead);
    }
    auto newToken = new Token(TokenType::ENDOFFILE, "EOF", lineNumber);
    tokens.push_back(newToken);
    PrintTokens();
    // TODO: convert this pseudo-code with the algorithm into actual C++ code
    /*
    set lineNumber to 1
    // While there are more characters to tokenize
    loop while input.size() > 0 {
        set maxRead to 0
        set maxAutomaton to the first automaton in automata

        // TODO: you need to handle whitespace in between tokens

        // Here is the "Parallel" part of the algorithm
        //   Each automaton runs with the same input
        foreach automaton in automata {
            inputRead = automaton.Start(input)
            if (inputRead > maxRead) {
                set maxRead to inputRead
                set maxAutomaton to automaton
            }
        }
        // Here is the "Max" part of the algorithm
        if maxRead > 0 {
            set newToken to maxAutomaton.CreateToken(...)
                increment lineNumber by maxAutomaton.NewLinesRead()
                add newToken to collection of all tokens
        }
        // No automaton accepted input
        // Create single character undefined token
        else {
            set maxRead to 1
                set newToken to a  new undefined Token
                (with first character of input)
                add newToken to collection of all tokens
        }
        // Update `input` by removing characters read to create Token
        remove maxRead characters from input
    }
    add end of file token to all tokens
    */
}
void Lexer::PrintTokens() {
    for (int i=0; i<tokens.size(); ++i){
        tokens[i]->printToken();
    }
}

void Lexer::SpaceChecker(std::string& input) {
    if (input[0] == ' ') {
        //std::cout << input << std::endl;
        input.erase(0, 1);
        //std::cout << input << std::endl;
        SpaceChecker(input);
    } else if (input[0] == '\n') {
        //std::cout << input << std::endl;
        input.erase(0, 1);
        //std::cout << input << std::endl;
        SpaceChecker(input);
    } else { return; }
}