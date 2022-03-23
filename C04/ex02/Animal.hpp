//
// Created by Tadeusz Kondracki on 3/23/22.
//

#ifndef CPP_MODULES_ANIMAL_HPP
#define CPP_MODULES_ANIMAL_HPP

#include <string>
#include "Brain.hpp"

class Animal
{
public:
	virtual ~Animal();
	Animal &operator=(Animal const &rhs);

	virtual void makeSound() const;
	std::string getType() const;
	Brain &getBrain();

protected:
	std::string type;
	Brain *brain;

	Animal();
	Animal(Animal const &inst);
};


#endif //CPP_MODULES_ANIMAL_HPP
