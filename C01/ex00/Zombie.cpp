//
// Created by Tadeusz Kondracki on 11/29/21.
//

#include <iostream>
#include <utility>
#include "Zombie.hpp"

void	Zombie::announce() {
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) : _name(std::move(name)) { }

Zombie::~Zombie() {
	std::cout << this->_name << " got smashed" << std::endl;
}
