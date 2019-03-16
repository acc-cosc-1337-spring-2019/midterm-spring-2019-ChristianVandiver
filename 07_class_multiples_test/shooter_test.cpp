#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"shooter.h"

/*
Test that shooter returns a Roll and verify that the roll result has one 
of the following values:
Natural
Craps
Point

*/

TEST_CASE("Testing shoot function")
{
	Die d1;
	Die d2;
	Shooter shoot;
	Roll dice(d1, d2);
	dice.roll();
	shoot.shoot(d1,d2);
	//REQUIRE(shoot.shoot(d1, d2) = Roll);
	REQUIRE(dice.result() != "You must roll first!");
}
