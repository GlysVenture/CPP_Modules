//
// Created by Tadeusz Kondracki on 3/23/22.
//

#include "Animal.hpp"
#include <iostream>

Animal::Animal(): type("animal") {
	std::cout << "animal created" << std::endl;
}

Animal::Animal(Animal const &inst)
{
	*this = inst;
}

Animal::~Animal() {
	std::cout << "animal destroyed" << std::endl;
}

Animal &Animal::operator=(Animal const &rhs)
{
	type = rhs.type;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "aghviauwrbjgvs" << std::endl;
}

std::string Animal::getType() const{
	return type;
}
