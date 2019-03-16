#include"dna_hamming.h"
#include<iostream>
#include<string>

int main() 
{
	std::string dna1;
	std::string dna2;
	std::string choice = "y";

	do
	{
		std::cout << "Enter the two dna strings that you wish to find the hamming distance between, press enter after each one." << "\n";
		std::cout << "String 1:";
		std::cin >> dna1;
		std::cout << "\n";
		std::cout << "String 2:";
		std::cin >> dna2;
		std::cout << "\n";

		std::cout << "The hamming distance is:" << get_dna_hamming_distance(dna1,dna2) << "\n";
		std::cout << "Do you want to run the program again? y or n:";
		std::cin >> choice;
		std::cout << "\n";
	} while (choice == "y" || choice == "Y");

	return 0;
}