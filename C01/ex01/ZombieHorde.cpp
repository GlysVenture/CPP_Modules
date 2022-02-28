//
// Created by Tadeusz Kondracki on 2/28/22.
//

#include "Zombie.hpp"

Zombie* betterZombieHorde( int N ) {
	Zombie *zombie_horde = new Zombie[N]();

	for (int i = 0; i < N; i++)
		zombie_horde[i].gen_name(i);
	return zombie_horde;
}

Zombie* zombieHorde( int N, std::string name ) {
	Zombie *zombie_horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		zombie_horde[i].set_name(name);
	return zombie_horde;
}
