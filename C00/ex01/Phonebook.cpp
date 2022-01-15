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
	if (this->num >= PH_SIZE) {
		std::cout << "Phonebook full, failed adding new contact" << std::endl;
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
	tries = -1;
	while (++tries < 3) {
		this->print_tab();
		std::cout << "please enter index:" << std::endl;
		std::getline(std::cin, line);
		index = std::stoi(line);
		if (0 < index && index <= this->num) {
			this->contacts[index - 1].print();
			return ;
		}
	}
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
