//
// Created by Tadeusz Kondracki on 3/7/22.
//

#include "Karen.h"
#include "../ex06/Karen.h"

#include <iostream>
#include <map>

Karen::Karen() { }

Karen::~Karen() { }

void Karen::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Karen::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Karen::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Karen::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
	switch (get_id(level))
	{
		case 0:
			debug();
			break;
		case 1:
			info();
			break;
		case 2:
			warning();
			break;
		case 3:
			error();
			break;
		default:
			std::cout << "Complain level invalid!" << std::endl;
	}
}

int Karen::get_id(std::string level)
{
	char levels[4][8] = {"DEBUG",
						 "INFO",
						 "WARNING",
						 "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			return i;
	}
	return (-1);
}
