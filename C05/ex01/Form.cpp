//
// Created by Tadeusz Kondracki on 3/24/22.
//

#include "Form.hpp"

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
{ }

Form::Form(Form const &inst):
	_execute_level(inst._execute_level),
	_sign_level(inst._sign_level),
	_name(inst._name)
{
	*this = inst;
}

Form::~Form()
{

}

Form &Form::operator=(Form const &rhs)
{
	_signed = rhs._signed;
}
