//
// Created by Tadeusz Kondracki on 11/28/21.
//

#include <iostream>
#include "Phonebook.h"

int	main(int argc, char **argv)
{
	Phonebook	book;
	std::string	buffer;

	std::cout << "$>";
	std::getline(std::cin, buffer);
	while (buffer != "EXIT")
	{
		if (buffer == "ADD")
			book.add();
		else if (buffer == "SEARCH")
			book.search();
		else
			std::cout << "command: " << buffer << " not found" << std::endl;
		std::cout << "$>";
		std::getline(std::cin, buffer);
	}
}
