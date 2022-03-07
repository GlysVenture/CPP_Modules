//
// Created by Tadeusz Kondracki on 3/7/22.
//

#ifndef CPP_MODULES_HUMANA_H
#define CPP_MODULES_HUMANA_H

#include "Weapon.h"

class HumanA
{
public:
	HumanA(const std::string& name, Weapon &weapon);
	~HumanA();

	void attack();

private:
	std::string	_name;
	Weapon		&_weapon;
};


#endif //CPP_MODULES_HUMANA_H
