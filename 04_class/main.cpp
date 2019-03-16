//Write include statement
#include"die.h"
#include<iostream>
#include<string>

/*
Program runs until user opts out.

For each loop Roll die and display output

*/

int main() 
{
	std::string choice = "y";
	do
	{
		Die die;
		die.roll();
		std::cout << die.rolled_value() << "\n";
		std::cout << "Do you want to roll again? y or n:";
		std::cin >> choice;
	} while (choice == "y" || choice == "Y");


	return 0;
}