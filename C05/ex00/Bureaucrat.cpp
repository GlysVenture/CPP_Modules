//
// Created by Tadeusz Kondracki on 3/24/22.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	this->level = 150;
}

Bureaucrat::Bureaucrat(int level)
{
	if (level < 1)
		throw Bureaucrat::GradeTooHighException();
	if (level > 150)
		throw Bureaucrat::GradeTooLowException();
	this->level = level;
}

Bureaucrat::Bureaucrat(Bureaucrat const &inst)
{
	*this = inst;
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	level = rhs.level;
	name = rhs.name;
	return *this;
}

std::string Bureaucrat::getName() const
{
	return name;
}

int Bureaucrat::getLevel() const
{
	return level;
}
