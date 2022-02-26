//
// Created by Tadeusz Kondracki on 11/29/21.
//

#include "Zombie.hpp"

#include <utility>

Zombie *new_zombie(std::string name){
	Zombie *zom;

	zom = new Zombie(std::move(name));
	return (zom);
}
