//
// Created by Tadeusz Kondracki on 3/7/22.
//

#include "Karen.h"
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
	int i = -1;
	if (_map.find(level) != _map.end())
		i = _map.find(level)->second;
	switch (i)
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

std::map<std::string, int> Karen::createMap()
{
	std::map<std::string, int> ret;
	ret["DEBUG"] = 0;
	ret["INFO"] = 1;
	ret["WARNING"] = 2;
	ret["ERROR"] = 3;
	return ret;
}
