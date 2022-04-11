//
// Created by Tadeusz Kondracki on 3/23/22.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main () {
	Form alabaster = Form("alabaster", 42, 56);
	Bureaucrat high = Bureaucrat(12, "high");
	Bureaucrat mid = Bureaucrat(47, "mid");
	Bureaucrat low = Bureaucrat(99, "low");
	try {
		Form bad = Form("stuff", -1, 155);
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << "too high" << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << "too low" << std::endl;
	}
	std::cout << "-----" << std::endl;
	low.signForm(alabaster);
	mid.signForm(alabaster);
	high.signForm(alabaster);
	high.signForm(alabaster);

}
