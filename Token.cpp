#include "Token.h"
#include <iostream>

Token::Token(TokenType type, std::string description, int line) {
    // TODO: initialize all member variables
    this->type = type;
    this->description = description;
    this->line = line;
}

std::string Token::printTokenType() {
    if (this->type == TokenType::COMMA){
        return "COMMA";
    }else if (this->type == TokenType::COLON){
        return "COLON";
    }else if (this->type == TokenType::COLON_DASH){
        return "COLON_DASH";
    }else if (this->type == TokenType::ENDOFFILE){
        return "EOF";
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
    }else if (this->type == TokenType::SCHEMES){
        return "SCHEMES";
    }else if (this->type == TokenType::FACTS){
        return "FACTS";
    }else if (this->type == TokenType::RULES){
        return "RULES";
    }else if (this->type == TokenType::QUERIES){
        return "QUERIES";
    }else if (this->type == TokenType::ID){
        return "ID";
    }else if (this->type == TokenType::STRING){
        return "STRING";
    }else if (this->type == TokenType::COMMENT){
        return "COMMENT";
    }else {return "I DON'T KNOW?";}
}
std::string Token::printTokenDescription() {
    return this->description;
}
int Token::printTokenLine() const {
    return this->line;
}

void Token::printToken() {
    std::cout << "(" << printTokenType() << ",\"" << printTokenDescription() << "\"," << printTokenLine() << ")" << std::endl;
}
