#include "Token.h"
#include "common.h"

TYPE Token::check_token_type(char input_char)
{
	//check is a digit
	if (isdigit(input_char))
		return NUM;
	//check if a letter
	if (isalpha(input_char))
		return WORD;
	switch (input_char)
	{
	case '*':return MULTY;
	case '+':return PLUS;
	case '-':return MINUS;
	case ' ':return SPACE;

	}
	//temp += c;
	//std::cout << temp << "\n";
}