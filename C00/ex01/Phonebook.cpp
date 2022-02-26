//
// Created by Tadeusz Kondracki on 11/28/21.
//

#include "Phonebook.h"

Phonebook::Phonebook()
{
	this->num = 0;
}

Phonebook::~Phonebook()
{

}

void	Phonebook::add()
{
	if (this->num == PH_SIZE) {
		this->contacts[this->num - 1].from_input();
		std::cout << "contact smashed and added successfully" << std::endl;
		return ;
	}
	this->contacts[this->num].from_input();
	std::cout << "contact added successfully" << std::endl;
	(this->num)++;
}

void	Phonebook::search()
{
	int 		tries;
	int 		index;
	std::string line;

	if(this->num == 0) {
		std::cout << "Phonebook empty" << std::endl;
		return ;
	}
	line = "0";
	tries = 0;
	do {
		try
		{
			index = std::stoi(line);
		}
		catch (...)
		{
			std::cout << "Error: invalid index" << std::endl;
			index = 0;
		}
		if (0 < index && index <= this->num) {
			this->contacts[index - 1].print();
			return ;
		}
		if (++tries > 3)
			return;
		this->print_tab();
		std::cout << "please enter index:" << std::endl;
		std::cout << "try" << tries << std::endl;
	} while (std::getline(std::cin, line) );
	std::cout << "tries exhausted" << std::endl;
}

void	Phonebook::print_tab()
{
	for (int i = 0; i < this->num; i++) {
		std::cout << "|" << i + 1 <<  "         |";
		this->contacts[i].print_data(firstname);
		std::cout << "|";
		this->contacts[i].print_data(lastname);
		std::cout << "|";
		this->contacts[i].print_data(nick);
		std::cout << "|" << std::endl;
	}
}
