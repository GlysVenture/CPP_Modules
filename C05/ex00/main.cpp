//
// Created by Tadeusz Kondracki on 3/23/22.
//

#include "Bureaucrat.hpp"

int main () {
	try
	{
		Bureaucrat good(34);
//		Bureaucrat badHigher(-2);
		Bureaucrat badLower(157);

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


}
