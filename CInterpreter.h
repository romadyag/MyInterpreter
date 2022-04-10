#pragma once
#include "Lexer.h"

class CInterpreter
{
public:
	Lexer lexer;
	void interpret(std::string input_string);
};

