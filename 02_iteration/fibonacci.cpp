#include "fibonacci.h"
#include<string>
/*
Write prototype for string value - return function get_fibonacci with an int
parameter that returns the fibonacci sequence up to that number.

DO NOT USE A RECURSIVE FUNCTION
*/

std::string get_fibonacci(int num)
{
	int i = 0;
	int s = 1;
	int next_in_sequence = i + s;
	std::string fibonacci = "0,1,1";
	do
	{
		i = s;
		s = next_in_sequence;
		next_in_sequence = i + s;
		fibonacci += ",";
		if (next_in_sequence < num)
		{
			fibonacci += std::to_string(next_in_sequence);
		}
	} while (next_in_sequence < num);
	
	return fibonacci;
}
