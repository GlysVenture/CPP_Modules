//
// Created by Tadeusz Kondracki on 3/23/22.
//

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "brain created" << std::endl;
}

Brain::Brain(Brain const &inst)
{
	*this = inst;
}

Brain::~Brain()
{
	std::cout << "brain destroyed" << std::endl;
}

Brain &Brain::operator=(Brain const &rhs)
{
	std::copy(std::begin(rhs.ideas), std::end(rhs.ideas), std::begin(ideas));
	return *this;
}

void Brain::addIdea(std::string id, int i) {
	if (i < 0 || i > 99)
		return;
	ideas[i] = id;
}

void Brain::printIdea(int i) const
{
	std::cout << ideas[i] << std::endl;
}
