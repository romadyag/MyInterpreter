#pragma once
#include <string>

class Token
{
public:
	enum TYPE{
		NUM,
		PLUS,
		MINUS,
		END
	} type;
	std::string text;
	int position;
};

