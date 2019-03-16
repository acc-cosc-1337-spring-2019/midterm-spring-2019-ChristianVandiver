#include<roll.h>
#include<vector>
#include<iostream>
/*
Create two Die instances.
Create a vector of Roll
Create a 20iteration loop and create a Roll instance, call roll function, 
output rolled values, and add to vector.

Loop through vector of Roll and output roll result
*/
int main()
{
	Die die1;
	Die die2;
	std::vector<int> rolls;
	for (int i = 0; i < 20; ++i)
	{
		Roll dice(die1, die2);
		dice.roll();
		std::cout << dice.result() << "\n";
		rolls.push_back(dice.value_1() && dice.value_2());
	}

	for (auto i : rolls)
	{
		std::cout << rolls[i] << "\n";
	}

	return 0;
}