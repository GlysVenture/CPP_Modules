//
// Created by Tadeusz Kondracki on 11/28/21.
//

#ifndef CPP_MODULES_CONTACT_H
#define CPP_MODULES_CONTACT_H

#include <iostream>
#include <iomanip>

enum e_data{
	firstname,
	lastname,
	nick,
	phone,
	secret
};

class Contact
{
public:
	Contact();
	~Contact();

	void	from_input();
	void	print() const;
	void	print_data(e_data data) const;

private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
};


#endif //CPP_MODULES_CONTACT_H
