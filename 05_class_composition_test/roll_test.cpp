#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

//write include statement for roll header
#include"roll.h"

/*
Write a test case to assert that retrieving the result from a roll before
calling the foll function returns the string:

Must roll first!
*/
TEST_CASE("Testing return funciton")
{
	Die die1;
	Die die2;
	Roll die(die1, die2);
	REQUIRE(die.result() == "You must roll first!");
}



/*
Write a test case to assert that every dice roll returns a valid result:
Craps
Natural
Point

(Loop at least 20 times and create an assert in the loop.)
*/
TEST_CASE("Testing roll return valid result")
{
	Die die1;
	Die die2;
	Roll die(die1, die2);
	for (int i = 0; i < 20; ++i)
	{
		die.roll();
		REQUIRE(die.result() != "You must roll first!");
	}
}
