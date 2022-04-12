//
// Created by Tadeusz Kondracki on 3/23/22.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main () {
	Intern i;
	Form *interned;

	if ((interned = i.makeForm("RobotomyRequestForm", "Bender")) == NULL){
		return (0);
	}
	std::cout << *interned << std::endl;
	delete interned;
	if ((interned = i.makeForm("PresidentialPardonForm", "Bender")) == NULL){
		return (0);
	}
	std::cout << *interned << std::endl;
	delete interned;
	if ((interned = i.makeForm("Haha", "Bender")) == NULL){
		return (0);
	}
	std::cout << *interned << std::endl;
	delete interned;
}
