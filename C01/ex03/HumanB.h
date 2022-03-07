//
// Created by Tadeusz Kondracki on 3/7/22.
//

#ifndef CPP_MODULES_HUMANB_H
#define CPP_MODULES_HUMANB_H

#include <string>
#include "Weapon.h"

class HumanB
{
public:
	HumanB(const std::string& name);
	~HumanB();

	void setWeapon(Weapon &weapon);
	void attack();

private:
	std::string	_name;
	Weapon		*_weapon;
};


#endif //CPP_MODULES_HUMANB_H
