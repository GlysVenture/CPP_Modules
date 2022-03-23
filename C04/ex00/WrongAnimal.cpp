//
// Created by Tadeusz Kondracki on 3/23/22.
//

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(): type("wrongAnimal") { }

WrongAnimal::WrongAnimal(WrongAnimal const &inst)
{
	*this = inst;
}

WrongAnimal::~WrongAnimal() { }

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
	type = rhs.type;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "aghviauwrbjgvs" << std::endl;
}

std::string WrongAnimal::getType() const{
	return type;
}
