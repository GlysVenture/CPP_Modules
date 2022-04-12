//
// Created by Tadeusz Kondracki on 3/23/22.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main () {
	Form *tree = new ShrubberyCreationForm();
	Form *robot = new RobotomyRequestForm();
	Bureaucrat banana(135, "Banana");
	Bureaucrat uber(2, "Uber");

	banana.signForm(*tree);
	banana.signForm(*robot);
	uber.signForm(*robot);
	banana.executeForm(*tree);
	banana.executeForm(*robot);
	uber.executeForm(*robot);

	delete tree;
}
