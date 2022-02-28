//
// Created by Tadeusz Kondracki on 2/28/22.
//

#include "Zombie.hpp"

int main() {

	Zombie* horde;

	horde = betterZombieHorde(25);

	for (int i = 0; i < 25; i++)
		horde[i].announce();
	delete [] horde;
}
