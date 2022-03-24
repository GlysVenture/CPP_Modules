//
// Created by Tadeusz Kondracki on 3/23/22.
//

#include "Bureaucrat.hpp"

int main () {

	std::cout << "Trying to create wrong Bureaucrats:" << std::endl;

	try
	{
//		Bureaucrat badHigher(-2);
		Bureaucrat badLower(157, "bad");

		std::cout << "Success?" << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "GradeTooHighException caught" <<  std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "GradeTooLowException caught" << std::endl;
	}

	Bureaucrat good(2, "good");

	std::cout << "Trying to level up wrongly Bureaucrats:" << std::endl;
	try
	{
		good++;
		std::cout << good << std::endl;
		good++;
		std::cout << "Success?" << std::endl;
		std::cout << good << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "GradeTooHighException caught" <<  std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "GradeTooLowException caught" << std::endl;
	}
	std::cout << good << std::endl;

}
