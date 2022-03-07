//
// Created by Tadeusz Kondracki on 3/7/22.
//

#include <iostream>
#include "HumanA.h"

HumanA::HumanA(const std::string& name, Weapon &weapon): _weapon(weapon)
{
	_name = name;
}

HumanA::~HumanA() { }

void	HumanA::attack(){
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
