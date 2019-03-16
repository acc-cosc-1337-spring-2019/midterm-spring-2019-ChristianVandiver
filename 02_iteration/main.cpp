//write include statement
#include"fibonacci.h"
#include<iostream>
#include<string>

/*
Program runs until user opts out.
Prompt user for a number and display the fibonacci series for the number
*/
int main() 
{
	int num;
	std::string choice = "y";

	do
	{
		std::cout << "Input the number you want the fibonacci sequence up to:";
		std::cin >> num;
		std::cout << "The fibonacci up to that number is:";
		std::cout << get_fibonacci(num) << "\n";
		
		std::cout << "Do you want the run the program again? y or n:";
		std::cin >> choice;
	} while (choice == "y" || choice == "Y");


	return 0;
}