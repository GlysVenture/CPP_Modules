//
// Created by Tadeusz Kondracki on 3/23/22.
//

#ifndef CPP_MODULES_DOG_HPP
#define CPP_MODULES_DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
public:
	Dog();

	Dog(Dog const &inst);

	~Dog();

	Dog &operator=(Dog const &rhs);

	void makeSound() const;
};


#endif //CPP_MODULES_DOG_HPP
