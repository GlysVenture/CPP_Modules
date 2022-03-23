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
	Animal();
	Animal(Animal const &inst);
	virtual ~Animal();

	Animal &operator=(Animal const &rhs);

	virtual void makeSound() const;
	std::string getType() const;
	Brain &getBrain();

protected:
	std::string type;
	Brain *brain;

};


#endif //CPP_MODULES_ANIMAL_HPP
