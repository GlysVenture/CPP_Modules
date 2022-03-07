//
// Created by Tadeusz Kondracki on 3/7/22.
//

#include "Weapon.h"

Weapon::Weapon(const std::string& type)
{
	_type = type;
}

Weapon::~Weapon() { }

std::string Weapon::getType() const
{
	return _type;
}

void Weapon::setType(std::string type)
{
	_type = type;
}
