#pragma once
#include "Lexer.h"
#include "common.h"

class CInterpreter
{
public:
	Lexer lexer;
	void interpret(std::string input_string);
};

