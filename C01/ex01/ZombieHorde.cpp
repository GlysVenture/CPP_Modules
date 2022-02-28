//
// Created by Tadeusz Kondracki on 2/28/22.
//

#include "Zombie.hpp"

Zombie* betterZombieHorde( int N ) {
	Zombie *zombie_horde = new Zombie[N]();

	for (int i = 0; i < N; ++i)
		zombie_horde[N].gen_name(N);
	return zombie_horde;
}

Zombie* zombieHorde( int N, std::string name ) {
	Zombie *zombie_horde = new Zombie[N]();

	for (int i = 0; i < N; ++i)
		zombie_horde[N].set_name(name);
	return zombie_horde;
}
