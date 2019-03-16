#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"roll_ol.h"

/*
Test the overloaded function to make sure roll's produce a valid result:
Craps
Natural
Point

Create Loop of at least 20 iterations
*/

TEST_CASE("Testing overloaded roll function")
{
	Die die1;
	Die die2;
	Roll roll;
	roll.roll(die1, die2);
	REQUIRE(roll.result() != "You must roll first!");
}


/*While trying to run the test case I was getting this error I am doing this on Friday night so I figured you probably couldn't respond in time on blackboard.

Severity	Code	Description	Project	File	Line	Suppression State
Error	LNK2019	unresolved external symbol "public: __cdecl Roll::Roll(void)" (? ? 0Roll@@QEAA@XZ) referenced in function "void __cdecl ____C_A_T_C_H____T_E_S_T____0(void)" (? ____C_A_T_C_H____T_E_S_T____0@@YAXXZ)	D : \Visual Studios\Common7\IDE\CMakeLists.txt	D : \Visual Studios\Common7\IDE\roll_ol_test.cpp.obj	1
*/