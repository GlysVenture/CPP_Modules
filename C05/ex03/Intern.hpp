//
// Created by Tadeusz Kondracki on 4/12/22.
//

#ifndef CPP_MODULES_INTERN_HPP
#define CPP_MODULES_INTERN_HPP

class Form;
#include "iostream"

class Intern
{
public:
	Intern();
	Intern(Intern const &inst);
	~Intern();

	Intern &operator=(Intern const &rhs);

	Form *makeForm(std::string name, std::string target) const;

private:
	static const std::string knownForms[3];
};


#endif //CPP_MODULES_INTERN_HPP
