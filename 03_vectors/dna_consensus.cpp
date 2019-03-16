#include"dna_consensus.h"

int a_count(std::vector<std::string> dna)
{
	int a = dna.size() - 1;
	int acount = 0;
	do
	{
		for (int i = 0; i < dna.size() - 2; ++i)
		{
			for (int b = 0; b < dna[i].size() - 2; ++b)
			{
				if (dna[b][i] == 'a' || dna[b][i] == 'A')
				{
					acount += 1;
				}
			}
		}
		a -= 1;
	} while (a >= 0);
	return acount;
}