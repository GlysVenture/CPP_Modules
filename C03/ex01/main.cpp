//
// Created by Tadeusz Kondracki on 3/10/22.
//

#include "ScavTrap.hpp"

int main(){

	ScavTrap trap;

	for (int i = 0; i < 4; ++i)
	{
		trap.attack("Captain Flynt");
	}

	for (int i = 0; i < 2; ++i)
	{
		trap.guardGate();
	}

	return 0;
}
