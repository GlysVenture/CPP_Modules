//
// Created by Tadeusz Kondracki on 3/24/22.
//

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form():
	_name("unknown"),
	_signed(false),
	_sign_level(150),
	_execute_level(150)
{ }

Form::Form(const std::string& name, int s_level, int e_level):
	_name(name),
	_signed(false),
	_sign_level(s_level),
	_execute_level(e_level)
{
	if (s_level > 150 || e_level > 150)
		throw GradeTooLowException();
	if (s_level < 1 || e_level < 1)
		throw GradeTooHighException();
}

Form::Form(Form const &inst):
	_name(inst._name),
	_sign_level(inst._sign_level),
	_execute_level(inst._execute_level)
{
	*this = inst;
}

Form::~Form()
{

}

Form &Form::operator=(Form const &rhs)
{
	_signed = rhs._signed;
	return *this;
}

int Form::getSignLevel() const
{
	return _sign_level;
}

int Form::getExecuteLevel() const
{
	return _execute_level;
}

bool Form::isSigned() const
{
	return _signed;
}

std::string Form::getName() const
{
	return _name;
}

void Form::beSigned(Bureaucrat &larve)
{
	if (larve.getLevel() <= _sign_level) {
		_signed = true;
	} else {
		throw GradeTooLowException();
	}
}

void Form::doExecute(const Bureaucrat &executor) const
{
	if (executor.getLevel() > _execute_level)
		throw GradeTooLowException();
	if (!this->_signed)
		throw FormNotSignedException();
	this->execute(executor);
}

std::ostream &operator<<(std::ostream  &o, Form const &b){
	o << b.getName() << ", form signed: " << b.isSigned()
	<< "\nsign_level: " << b.getSignLevel()
	<< "\nexecute_level: " << b.getExecuteLevel();
	return o;
}
