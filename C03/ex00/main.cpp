//
// Created by Tadeusz Kondracki on 3/10/22.
//

#include "ClapTrap.h"

int main(){

	ClapTrap robot("Clappy");

	robot.attack("Sir Hammerlock");
	robot.takeDamage(9);
	for (int i = 0; i < 10; ++i)
	{
		robot.beRepaired(2);
	}
	robot.attack("Sir Hammerlock");
	robot.takeDamage(25);
	robot.takeDamage(25);
	robot.attack("Sir Hammerlock");

	return 0;
}
