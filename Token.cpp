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
    }else if (this->type == TokenType::PERIOD){
        return "PERIOD";
    }else if (this->type == TokenType::Q_MARK){
        return "Q_MARK";
    }else if (this->type == TokenType::LEFT_PAREN){
        return "LEFT_PAREN";
    }else if (this->type == TokenType::RIGHT_PAREN){
        return "RIGHT_PAREN";
    }else if (this->type == TokenType::MULTIPLY){
        return "MULTIPLY";
    }else if (this->type == TokenType::ADD){
        return "ADD";
    }
}
