//
// Created by Tadeusz Kondracki on 3/24/22.
//

#ifndef CPP_MODULES_FORM_HPP
#define CPP_MODULES_FORM_HPP

#include <iostream>
class Bureaucrat;

class Form
{
public:
	Form();
	Form(Form const &inst);
	Form(const std::string& name, int s_level, int e_level);
	~Form();

	Form &operator=(Form const &rhs);

	class GradeTooHighException: public std::exception {};
	class GradeTooLowException: public std::exception {};

	int		getSignLevel() const;
	int		getExecuteLevel() const;
	bool	isSigned() const;
	std::string	getName() const;
	void	beSigned(Bureaucrat &larve);

private:
	std::string const _name;
	bool _signed;
	int const _sign_level;
	int const _execute_level;
};

std::ostream &operator<<(std::ostream  &o, Form const &b);

#endif //CPP_MODULES_FORM_HPP
