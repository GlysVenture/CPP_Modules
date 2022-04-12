//
// Created by Tadeusz Kondracki on 4/12/22.
//

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: Form("unknown_robotomy", 72, 45),
	  _target("alakazam")
{
	//default values
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &inst)
{
	*this = inst;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	_target = rhs._target;
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &name,
										 const std::string &target): Form(name, 72, 45)
{
	_target = target;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	srand(time(NULL));
	std::cout << "brrr... brrrrrr... brrbrr...\n"
				 "brrrrrr...\n"
				 "BRRRRR....." << std::endl;
	if (rand() % 2){
		std::cout << _target << " robotomised successfully!" << std::endl;
	} else {
		std::cout << _target << " robotomisation failed..." << std::endl;
	}
	(void) executor;
}
