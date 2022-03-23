//
// Created by Tadeusz Kondracki on 3/23/22.
//

#include "Cat.hpp"
#include <iostream>

Cat::Cat() {
	type = "Cat";
	std::cout << "cat created" << std::endl;
}

Cat::Cat(Cat const &inst)
{
	*this = inst;
}

Cat::~Cat()
{
	std::cout << "cat destroyed" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs)
{
	type = rhs.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "miaow!" << std::endl;
}
