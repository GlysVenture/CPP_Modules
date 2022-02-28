//
// Created by Tadeusz Kondracki on 11/29/21.
//

#include <iostream>
#include <utility>
#include "Zombie.hpp"

const std::string Names[10] = {
	"Herodotus",
	"Thucydides",
	"Patroclus",
	"Agamemnon",
	"Socrates",
	"Aristotle",
	"Archimedes",
	"Democritus",
	"Alexander",
	"Demosthenes",
};

const std::string Titles[10] = {
	"",
	" the Second",
	" the Third",
	" the Fourth",
	" the Fifth",
	" the Sixth",
	" the Seventh",
	" the Eighth",
	" the Ninth",
	" the Tenth",
};

void	Zombie::announce() {
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) : _name(name) { }

Zombie::Zombie() { }

Zombie::~Zombie() {
	std::cout << this->_name << " got smashed" << std::endl;
}

void Zombie::gen_name(int ran_id) {
	this->_name = Names[ran_id % 10] + Titles[(ran_id / 10) % 10];
}

void Zombie::set_name(std::string name) {
	this->_name = name;
}
