#include "CInterpreter.h"

void CInterpreter::interpret(std::string input_string)
{
	lexer.tokenize(input_string);
}