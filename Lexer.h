#pragma once
#include "Token.h"
#include <deque>
#include <string>
class Lexer
{
public:
	std::deque<Token> token_queue;
	void tokenize(std::string input_string);
};

