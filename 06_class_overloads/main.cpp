/*
Create two Die instances.
Create a vector of Roll
Create a 20iteration loop and create a Roll instance, call roll OVERLOADED function,
output rolled values, and add to vector.

Loop through vector of Roll and output roll result
*/

#include"roll_ol.h"
#include<vector>
#include<iostream>

int main() 
{
	Die die1;
	Die die2;
	std::vector<int> result;

	for (int i = 0; i < 20; ++i)
	{
		Roll roll;
		roll.roll(die1, die2);
		std::cout << roll.value_1() << "\n" << roll.value_2() << "\n";
		result.push_back(roll.value_1() && roll.value_2());
	}

	for (auto c : result)
	{
		std::cout << result[c] << "\n";
	}

	return 0;
}

/*
While trying to run the program I was getting this error I was doing this one late Friday night and I didn't think there would be time for you to reply.

Severity	Code	Description	Project	File	Line	Suppression State
Error	LNK2019	unresolved external symbol "public: __cdecl Roll::Roll(void)" (??0Roll@@QEAA@XZ) referenced in function main	D:\Visual Studios\Common7\IDE\CMakeLists.txt	D:\Visual Studios\Common7\IDE\main.cpp.obj	1
*/

