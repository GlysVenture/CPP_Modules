//
// Created by Tadeusz Kondracki on 3/23/22.
//

#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	type = "Dog";
	std::cout << "dog created" << std::endl;
}

Dog::Dog(Dog const &inst)
{
	*this = inst;
}

Dog::~Dog()
{
	std::cout << "dog destroyed" << std::endl;
}

Dog &Dog::operator=(Dog const &rhs)
{
	type = rhs.type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "wouf wouf!" << std::endl;
}
