//
// Created by Tadeusz Kondracki on 3/24/22.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"


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

void Bureaucrat::signForm(Form &form)
{
	if (form.isSigned()){
		std::cout << name << " couldn't sign " << form.getName() << " because it was already signed" << std::endl;
		return;
	}
	try
	{
		form.beSigned(*this);
		std::cout << name << " signed " << form.getName() << std::endl;
	}
	catch (Form::GradeTooLowException &e) {
		std::cout << name << " couldn't sign " << form.getName() << " because his level was too low" << std::endl;
	}
}

void Bureaucrat::executeForm(const Form &form) const
{
	try
	{
		form.doExecute(*this);
		std::cout << this->getName() << " executed form: "
				  << form.getName() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << this->getName() << " couldn't execute form: "
			<< form.getName() << " because of too low level" << std::endl;
	}
	catch (Form::FormNotSignedException &e)
	{
		std::cout << this->getName() << " couldn't execute form: "
			<< form.getName() << " because it wasn't signed" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->getName() << " couldn't execute form: "
			<< form.getName() << " because of: " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream  &o, Bureaucrat const &b){
	o << b.getName() << ", bureaucrat grade " << b.getLevel();
	return o;
}
