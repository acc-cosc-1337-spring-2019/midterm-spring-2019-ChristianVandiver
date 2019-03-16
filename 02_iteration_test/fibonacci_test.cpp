#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
//write include statement for fibonacci header
#include"fibonacci.h"

TEST_CASE("Test configuration setup")
{
	REQUIRE(true == true);
}

TEST_CASE("Testing get_fibonacci function")
{
	REQUIRE(get_fibonacci(10) == "0,1,1,2,3,5,8,");
	REQUIRE(get_fibonacci(100) == "0,1,1,2,3,5,8,13,21,34,55,89,");
}

/*
Write test case for get fibonacci function with values 10 and 100
*/
