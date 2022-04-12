//
// Created by Tadeusz Kondracki on 4/12/22.
//

#ifndef CPP_MODULES_ROBOTOMYREQUESTFORM_HPP
#define CPP_MODULES_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string& name, const std::string& target);
	RobotomyRequestForm(RobotomyRequestForm const &inst);
	~RobotomyRequestForm();

	RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);

	void execute(Bureaucrat const & executor) const;

private:
	std::string _target;
};


#endif //CPP_MODULES_ROBOTOMYREQUESTFORM_HPP
