
/*
Program runs until user opts out.
Create two Die instances, a Shooter instance, and a vector of Roll objects.
Create a loop that allows user to shoot 10 times and add each roll created by 
Shooter shoot() function into vector of Roll.

In another loop iterate the vector of Roll and dislplay the Roll result.
*/
#include"shooter.h"
#include<vector>
#include<iostream>
#include<string>
int main() 
{
		Die die1;
		Die die2;
		Shooter shoot;
		std::vector<int> rolls;
		for (int i = 0; i < 10; ++i)
		{
			Roll roll(die1, die2);
			shoot.shoot(die1, die2);
			rolls.push_back(roll.value_1() && roll.value_2());
		}

		for (auto i : rolls)
		{
			std::cout << rolls[i] << "\n";
		}

		return 0;
}