#include "Lexer.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char** argv) {

    Lexer* lexer = new Lexer();

    string fileName = argv[1];
    ifstream input(fileName);
    if (!input.is_open()) {
        cout << "File " << fileName << " could not be found or opened." << endl;
        return 1;
    }

    string fileInput;
    istreambuf_iterator<char> fileIt(input), emptyFileIt;
    back_insert_iterator<string> stringIn(fileInput);
    copy(fileIt, emptyFileIt, stringIn);

    cout << fileName << endl;
    cout << fileInput << endl;

    lexer->Run(fileInput);

    cout << fileName << endl;
    cout << fileInput << endl;

    delete lexer;

    return 0;
}