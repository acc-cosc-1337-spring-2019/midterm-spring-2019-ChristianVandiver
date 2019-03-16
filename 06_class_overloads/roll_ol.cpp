//class implementation
#include"roll_ol.h"
#include<ctime>


void Roll::roll()
{
	std::srand(time(NULL));
	die1_roll_value = (std::rand() % 6) + 1;
	die2_roll_value = (std::rand() % 6) + 1;
	rolled = true;
}

void Roll::roll(Die & die1, Die & die2)
{
	std::srand(time(NULL));
	die1_roll_value = (std::rand() % 6) + 1;
	die2_roll_value = (std::rand() % 6) + 1;
	rolled = true;
}

std::string Roll::result()
{
	if (rolled == true && natural())
	{
		return "Natural";
	}
	else if (rolled == true && craps())
	{
		return "Craps";
	}
	else if (rolled == true && craps() == false && natural() == false)
	{
		return "Points";
	}
	else
	{
		return "You must roll first!";
	}
}

int Roll::value_1()
{
	return die1_roll_value;
}

int Roll::value_2()
{
	return die2_roll_value;
}

bool Roll::craps()
{
	if (die1_roll_value + die2_roll_value == 2 || die1_roll_value + die2_roll_value == 3 || die1_roll_value + die2_roll_value == 12)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Roll::natural()
{
	if (die1_roll_value + die2_roll_value == 7 || die1_roll_value + die2_roll_value == 11)
	{
		return true;
	}
	else
	{
		return false;
	}
}

