#pragma once
#include "Token.h"
#include "common.h"

class Lexer: public Token
{
public:
	std::deque<Token> token_queue;
	void tokenize(std::string input_string);
	void push_char_as_token(TYPE t, char c, int pos);
	void try_to_combine_with_prev(TYPE t, char c, int pos);
};

