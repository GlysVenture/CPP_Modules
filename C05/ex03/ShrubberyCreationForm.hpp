//
// Created by Tadeusz Kondracki on 4/12/22.
//

#ifndef CPP_MODULES_SHRUBBERYCREATIONFORM_HPP
#define CPP_MODULES_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string& name, const std::string& target);
	ShrubberyCreationForm(ShrubberyCreationForm const &inst);
	~ShrubberyCreationForm();

	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);

	void execute(Bureaucrat const & executor) const;

private:
	std::string _target;
};


#endif //CPP_MODULES_SHRUBBERYCREATIONFORM_HPP
