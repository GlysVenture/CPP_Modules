//
// Created by Tadeusz Kondracki on 3/23/22.
//

#include "Animal.hpp"
#include <iostream>

Animal::Animal(): type("animal") {
	std::cout << "animal created" << std::endl;
	brain = new Brain();
}

Animal::Animal(Animal const &inst)
{
	*this = inst;
}

Animal::~Animal() {
	delete brain;
	std::cout << "animal destroyed" << std::endl;
}

Animal &Animal::operator=(Animal const &rhs)
{
	type = rhs.type;
	brain = new Brain(*rhs.brain);
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "aghviauwrbjgvs" << std::endl;
}

std::string Animal::getType() const{
	return type;
}

Brain &Animal::getBrain() {
	return *brain;
}
