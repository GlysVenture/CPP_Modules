//
// Created by Tadeusz Kondracki on 3/23/22.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main () {
	Form *tree = new ShrubberyCreationForm("CutCut", "parc");
	Form *robot = new RobotomyRequestForm("Stuff", "pikachu");
	Form *pardon = new PresidentialPardonForm("Pardon", "The Duck");
	Bureaucrat banana(135, "Banana");
	Bureaucrat uber(2, "Uber");

	banana.signForm(*tree);
	banana.signForm(*robot);
	uber.signForm(*robot);
	uber.signForm(*robot);
	uber.signForm(*pardon);
	banana.executeForm(*tree);
	banana.executeForm(*robot);
	uber.executeForm(*robot);
	uber.executeForm(*pardon);

	delete tree;
	delete robot;
	delete pardon;
}
