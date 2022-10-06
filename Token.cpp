#include "Token.h"
#include <iostream>

Token::Token(TokenType type, std::string description, int line) {
    // TODO: initialize all member variables
    this->type = type;
}

std::string Token::printTokenType() {
    if (this->type == TokenType::COMMA){
        return "COMMA";
    }else if (this->type == TokenType::COLON){
        return "COLON";
    }else if (this->type == TokenType::COLON_DASH){
        return "COLON_DASH";
    }else if (this->type == TokenType::ENDOFFILE){
        return "ENDOFFILE";
    }else if (this->type == TokenType::UNDEFINED){
        return "UNDEFINED";
    }
}
