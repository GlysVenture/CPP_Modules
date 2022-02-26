//
// Created by Tadeusz Kondracki on 11/29/21.
//

#include <string>
#include <utility>
#include "Zombie.hpp"

void	random_chump(std::string name){
	Zombie zom(std::move(name));

	zom.announce();
}
