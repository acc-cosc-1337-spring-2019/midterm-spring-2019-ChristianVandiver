#include "dna_hamming.h"
/*
Write code for value-return function get_dna_hamming_distance with two const string
reference parameters that returns an int.

Problem
Figure 2. The Hamming distance between these two strings is 7. Mismatched symbols are 
colored red. Given two strings s and t of equal length, the Hamming distance between
s and t, denoted dH(s,t), is the number ofcorresponding symbols that differ in s and t.

Sample for function call 
int distance = get_dna_hamming_distance("GAGCCTACTAACGGGAT", "CATCGTAATGACGGCCT");

distance will be 7

*/

int get_dna_hamming_distance(const std::string dna1, const std::string dna2)
{
	int total = 0;
	for (int i = 0; i < dna1.size() - 1; ++i)
	{
		if (dna1[i] != dna2[i])
		{
			total += 1;
		}
	}
	
	return total;
}
