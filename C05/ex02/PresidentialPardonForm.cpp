//
// Created by Tadeusz Kondracki on 4/12/22.
//

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: Form("unknown_pardon", 25, 5),
	  _target("MaryPoppins")
{
	//default values
}

PresidentialPardonForm::PresidentialPardonForm(
	PresidentialPardonForm const &inst)
{
	*this = inst;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	_target = rhs._target;
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &name,
											   const std::string &target): Form(name, 72, 45)
{
	_target = target;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	std::cout << _target << " was pardonned by Zaphod Beeblebrox" << std::endl;
	(void) executor;
}
