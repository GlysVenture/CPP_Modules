//
// Created by Tadeusz Kondracki on 11/28/21.
//

#include "Contact.h"

Contact::Contact()
{

}

Contact::~Contact()
{

}

void	Contact::from_input()
{
	std::cout << "input first name:" << std::endl;
	std::getline(std::cin, this->first_name);
	std::cout << "input last name:" << std::endl;
	std::getline(std::cin, this->last_name);
	std::cout << "input nickname:" << std::endl;
	std::getline(std::cin, this->nickname);
	std::cout << "input phone number:" << std::endl;
	std::getline(std::cin, this->phone_number);
	std::cout << "input darkest secret:" << std::endl;
	std::getline(std::cin, this->darkest_secret);
}

void	Contact::print() const
{
	std::cout << "first name: " << this->first_name << std::endl;
	std::cout << "last name: " << this->last_name << std::endl;
	std::cout << "nickname: " << this->nickname << std::endl;
	std::cout << "phone number: " << this->phone_number << std::endl;
	std::cout << "darkest secret: " << this->darkest_secret << std::endl;
}

void	Contact::print_data(e_data data) const {
	std::cout << std::left << std::setw(10);
	switch (data)
	{
		case firstname:
			if (this->first_name.length() > 10)
				std::cout << this->first_name.substr(0,9).append(".");
			else
				std::cout << this->first_name;
			break;
		case lastname:
			if (this->last_name.length() > 10)
				std::cout << this->last_name.substr(0,9).append(".");
			else
				std::cout << this->last_name;
			break;
		case nick:
			if (this->nickname.length() > 10)
				std::cout << this->nickname.substr(0,9).append(".");
			else
				std::cout << this->nickname;
			break;
		case phone:
			if (this->phone_number.length() > 10)
				std::cout << this->phone_number.substr(0,9).append(".");
			else
				std::cout << this->phone_number;
			break;
		case secret:
			if (this->darkest_secret.length() > 10)
				std::cout << this->darkest_secret.substr(0,9).append(".");
			else
				std::cout << this->darkest_secret;
			break;
	}
}
