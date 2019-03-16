#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
//write include statement for dna consensus header
#include"dna_consensus.h"

TEST_CASE("Test configuration setup")
{
	REQUIRE(true == true);
}

/*TEST_CASE("Test a_count")
{
	std::vector<std::string> dna = { "AAAAAAAA", "AAAAAAAA" };

	REQUIRE(a_count(dna) == 1);
}*/
