//
// Created by Tadeusz Kondracki on 3/10/22.
//

#include "FragTrap.hpp"

int main(){

	FragTrap trap;

	for (int i = 0; i < 4; ++i)
	{
		trap.attack("Captain Flynt");
	}

	for (int i = 0; i < 2; ++i)
	{
		trap.highFivesGuys();
	}

	return 0;
}
