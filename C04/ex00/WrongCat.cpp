//
// Created by Tadeusz Kondracki on 3/23/22.
//

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() {
	type = "Cat";
}

WrongCat::WrongCat(WrongCat const &inst)
{
	*this = inst;
}

WrongCat::~WrongCat()
{

}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
	type = rhs.type;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "miaow!" << std::endl;
}
