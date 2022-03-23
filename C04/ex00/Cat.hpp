//
// Created by Tadeusz Kondracki on 3/23/22.
//

#ifndef CPP_MODULES_CAT_HPP
#define CPP_MODULES_CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
public:
	Cat();

	Cat(Cat const &inst);

	~Cat();

	Cat &operator=(Cat const &rhs);

	void makeSound() const;
};


#endif //CPP_MODULES_CAT_HPP
