//
// Created by Tadeusz Kondracki on 11/29/21.
//

#include <iostream>
#include "Zombie.hpp"

int	main()
{
	Zombie	*heap_zomb;
	std::cout << "zumba, umba zolo!" << std::endl;

	heap_zomb = new_zombie("Herodotus");
	heap_zomb->announce();
	random_chump("Thucydides");
	heap_zomb->announce();
	delete heap_zomb;
}
