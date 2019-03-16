#include "shooter.h"

//class Shooter implementation

Roll Shooter::shoot(Die & d1, Die & d2)
{
	Die die1;
	Die die2;
	Roll dice(die1, die2);
	dice.roll();
	dice.result();

	return dice;
}
