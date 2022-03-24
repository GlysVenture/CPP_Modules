//
// Created by Tadeusz Kondracki on 3/24/22.
//

#ifndef CPP_MODULES_BUREAUCRAT_HPP
#define CPP_MODULES_BUREAUCRAT_HPP

#include <exception>
#include <iostream>

class Bureaucrat
{

public:
	Bureaucrat();
	Bureaucrat(Bureaucrat const &inst);
	Bureaucrat(int level);

	~Bureaucrat();

	class GradeTooHighException: public std::exception
	{
//		GradeTooHighException();
//		~GradeTooHighException();
	};

	class GradeTooLowException: public std::exception
	{
//		GradeTooLowException();
//		~GradeTooLowException();
	};

	Bureaucrat &operator=(Bureaucrat const &rhs);

	std::string getName() const;
	int getLevel() const;

private:
	std::string name;
	int			level;
};


#endif //CPP_MODULES_BUREAUCRAT_HPP
