//
// Created by Tadeusz Kondracki on 3/23/22.
//

#ifndef CPP_MODULES_BRAIN_HPP
#define CPP_MODULES_BRAIN_HPP

#include <iostream>

class Brain
{
public:
	Brain();

	Brain(Brain const &inst);

	~Brain();

	Brain &operator=(Brain const &rhs);
	void addIdea(std::string id, int i);
	void printIdea(int i) const;

private:
	std::string ideas[100];
};


#endif //CPP_MODULES_BRAIN_HPP
