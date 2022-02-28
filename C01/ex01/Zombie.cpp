//
// Created by Tadeusz Kondracki on 11/29/21.
//

#include <iostream>
#include <utility>
#include "Zombie.hpp"

const char Names[10][13] = {
	"Herodotus\0",
	"Thucydides\0",
	"Patroclus\0",
	"Agamemnon\0",
	"Socrates\0",
	"Aristotle\0",
	"Archimedes\0",
	"Democritus\0",
	"Alexander\0",
	"Demosthenes\0",
};

void	Zombie::announce() {
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) : _name(std::move(name)) { }

Zombie::Zombie() { }

Zombie::~Zombie() {
	std::cout << this->_name << " got smashed" << std::endl;
}

void Zombie::gen_name(int ran_id) {
	this->_name = Names[ran_id % 10];
}

void Zombie::set_name(std::string name) {
	this->_name = std::move(name);
}
