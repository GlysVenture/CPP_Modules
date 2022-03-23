//
// Created by Tadeusz Kondracki on 3/23/22.
//

#ifndef CPP_MODULES_ANIMAL_HPP
#define CPP_MODULES_ANIMAL_HPP

#include <string>

class Animal
{
public:
	Animal();
	Animal(Animal const &inst);
	virtual ~Animal();

	Animal &operator=(Animal const &rhs);

	virtual void makeSound() const;
	std::string getType() const;

protected:
	std::string type;
};


#endif //CPP_MODULES_ANIMAL_HPP
