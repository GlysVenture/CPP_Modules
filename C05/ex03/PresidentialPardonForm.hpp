//
// Created by Tadeusz Kondracki on 4/12/22.
//

#ifndef CPP_MODULES_PRESIDENTIALPARDONFORM_HPP
#define CPP_MODULES_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string& name, const std::string& target);
	PresidentialPardonForm(PresidentialPardonForm const &inst);
	~PresidentialPardonForm();

	PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);

	void execute(Bureaucrat const & executor) const;

private:
	std::string _target;
};


#endif //CPP_MODULES_PRESIDENTIALPARDONFORM_HPP
