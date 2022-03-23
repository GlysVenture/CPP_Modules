//
// Created by Tadeusz Kondracki on 3/23/22.
//

#ifndef CPP_MODULES_WRONG_ANIMAL_HPP
#define CPP_MODULES_WRONG_ANIMAL_HPP

#include <string>

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const &inst);
	~WrongAnimal();

	WrongAnimal &operator=(WrongAnimal const &rhs);

	void makeSound() const;
	std::string getType() const;

protected:
	std::string type;
};


#endif //CPP_MODULES_WRONG_ANIMAL_HPP
