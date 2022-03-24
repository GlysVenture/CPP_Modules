//
// Created by Tadeusz Kondracki on 3/24/22.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("whatever")
{
	this->level = 150;
}

Bureaucrat::Bureaucrat(int level, std::string name): name(name)
{
	if (level < 1)
		throw Bureaucrat::GradeTooHighException();
	if (level > 150)
		throw Bureaucrat::GradeTooLowException();
	this->level = level;
}

Bureaucrat::Bureaucrat(Bureaucrat const &inst): name(inst.name)
{
	*this = inst;
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	level = rhs.level;
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

Bureaucrat &Bureaucrat::operator++(int)
{
	if (level <= 1)
		throw Bureaucrat::GradeTooHighException();
	level--;
	return *this;
}

Bureaucrat &Bureaucrat::operator--(int)
{
	if (level >= 150)
		throw Bureaucrat::GradeTooLowException();
	level++;
	return *this;
}

std::ostream &operator<<(std::ostream  &o, Bureaucrat const &b){
	o << b.getName() << ", bureaucrat grade " << b.getLevel();
	return o;
}
