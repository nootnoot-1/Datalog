#ifndef TOKEN_H
#define TOKEN_H
#include <string>

enum class TokenType {
    COLON,
    COLON_DASH,
    COMMA,
    // TODO: add the other types of tokens
    UNDEFINED,
    ENDOFFILE,
};

class Token
{
private:
    // TODO: add member variables for information needed by Token
    TokenType type;

public:
    Token(TokenType type, std::string description, int line);
    std::string printTokenType();

    // TODO: add other needed methods
};

#endif // TOKEN_H

