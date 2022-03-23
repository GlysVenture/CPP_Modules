//
// Created by Tadeusz Kondracki on 3/23/22.
//

#ifndef CPP_MODULES_WRONG_CAT_HPP
#define CPP_MODULES_WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
public:
	WrongCat();

	WrongCat(WrongCat const &inst);

	~WrongCat();

	WrongCat &operator=(WrongCat const &rhs);

	void makeSound() const;
};


#endif //CPP_MODULES_WRONG_CAT_HPP
