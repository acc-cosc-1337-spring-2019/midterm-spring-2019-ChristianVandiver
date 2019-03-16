/*
Create an instance of roll and call the friend function to output roll values
*/
#include"roll_friend.h"
int main() 
{
	Die die1;
	Die die2;
	Roll dice(die1,die2);
	dice.roll();
	display(dice);
	return 0;
}