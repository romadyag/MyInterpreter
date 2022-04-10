#include "Lexer.h"

void Lexer::push_char_as_token(TYPE t, char c, int pos)
{
	token_queue.push_back(Token{ t, std::string{c}, pos });
}
void Lexer::try_to_combine_with_prev(TYPE t, char c, int pos)
{
	//future: keep track of comments and strings
	if (!token_queue.empty())
	{
		if (token_queue.back().type == t)
		{
			switch (t) {
			case SPACE: break;	//needed?
			default:	token_queue.back().text += c; break;
			}
		}
		else
			token_queue.push_back(Token{ t, std::string{c}, pos });
	}
	else token_queue.push_back(Token{ t, std::string{c}, pos });
}
void Lexer::tokenize(std::string input_string)
{
	std::string temp;
	for (int pos = 0; pos < input_string.length(); ++pos)
	{
		char c = input_string[pos];
		switch (TYPE t=check_token_type(c))
		{
		case WORD:	try_to_combine_with_prev(t, c, pos); break;
		case NUM:	try_to_combine_with_prev(t, c, pos); break;
		case SPACE:	try_to_combine_with_prev(t, c, pos); break;
		default:	push_char_as_token(t, c, pos); break;
		}


	}
	for (std::deque<Token>::iterator it = token_queue.begin(); it != token_queue.end(); ++it)
		std::cout<<(*it).text<<"\n";
	std::cout << "\n";
}
