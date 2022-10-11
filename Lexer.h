#ifndef LEXER_H
#define LEXER_H
#include <vector>
#include "Automaton.h"
#include "Token.h"

class Lexer
{
private:
    std::vector<Automaton*> automata;
    std::vector<Token*> tokens;


    void CreateAutomata();

    // TODO: add any other private methods here (if needed)

public:
    Lexer();
    ~Lexer();

    void Run(std::string& input);
    void PrintTokens();
    void SpaceChecker(std::string& input, int& linenumber);
    //void GetNewLines(int &linenumber, Automaton maxAutomaton);

    // TODO: add other public methods here

};

#endif // LEXER_H

