#pragma once
#include "common.h"
enum TYPE {
	NUM,
	WORD,
	PLUS,
	MINUS,
	MULTY,
	SPACE,
	END
};
class Token
{
public:
	TYPE type;
	std::string text;
	int position;

	TYPE check_token_type(char input_char);
};

