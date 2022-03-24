//
// Created by Tadeusz Kondracki on 3/24/22.
//

#ifndef CPP_MODULES_FORM_HPP
#define CPP_MODULES_FORM_HPP

#include <iostream>

class Form
{
public:
	Form();
	Form(Form const &inst);
	Form(const std::string& name, int s_level, int e_level);
	~Form();

	Form &operator=(Form const &rhs);

private:
	std::string const _name;
	bool _signed;
	int const _sign_level;
	int const _execute_level;
};


#endif //CPP_MODULES_FORM_HPP
