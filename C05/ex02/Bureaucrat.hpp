//
// Created by Tadeusz Kondracki on 3/24/22.
//

#ifndef CPP_MODULES_BUREAUCRAT_HPP
#define CPP_MODULES_BUREAUCRAT_HPP

#include <exception>
#include <iostream>
class Form;

class Bureaucrat
{

public:
	Bureaucrat();
	Bureaucrat(Bureaucrat const &inst);
	Bureaucrat(int level, std::string name);

	~Bureaucrat();

	class GradeTooHighException: public std::exception {};
	class GradeTooLowException: public std::exception {};

	Bureaucrat &operator=(Bureaucrat const &rhs);

	std::string getName() const;
	int getLevel() const;
	void	signForm(Form &form);
	Bureaucrat &operator++(int);
	Bureaucrat &operator--(int);

private:
	std::string const name;
	int			level;
};

std::ostream &operator<<(std::ostream  &o, Bureaucrat const &b);


#endif //CPP_MODULES_BUREAUCRAT_HPP
