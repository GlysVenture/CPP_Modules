//
// Created by Tadeusz Kondracki on 3/7/22.
//

#include "HumanB.h"
#include <iostream>

HumanB::HumanB(const std::string& name)
{
	_name = name;
	_weapon = nullptr;
}

HumanB::~HumanB() { }

void	HumanB::attack(){
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " attacks with their bare hands" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}
