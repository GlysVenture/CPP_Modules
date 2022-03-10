//
// Created by Tadeusz Kondracki on 3/10/22.
//

#include "ClapTrap.h"

#include <iostream>

ClapTrap::ClapTrap()
{
	_name = "Model 01";
	_attack_damage = 0;
	_energy_points = 10;
	_hit_points = 10;
	std::cout << _name << " ClapTrap was born" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_attack_damage = 0;
	_energy_points = 10;
	_hit_points = 10;
	std::cout << _name << " ClapTrap was born" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &inst)
{
	*this = inst;
	std::cout << _name << " ClapTrap was born" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << _name << " ClapTrap was smashed to bits" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
	_name = rhs._name;
	_attack_damage = rhs._attack_damage;
	_hit_points = rhs._hit_points;
	_energy_points = rhs._energy_points;
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (is_ko())
		return;
	std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attack_damage << " damage" << std::endl;
	_energy_points--;
}

bool ClapTrap::is_ko()
{
	if (_hit_points <= 0){
		std::cout << _name << " is DEAD" << std::endl;
		return true;
	}
	if (_energy_points <= 0){
		std::cout << _name << " is out of energy" << std::endl;
		return true;
	}
	return false;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int taken = _hit_points < amount ? _hit_points : amount;
	_hit_points -= taken;
	std::cout << "ClapTrap " << _name << " takes " << taken << " damage" << std::endl;
	if (_hit_points == 0)
		std::cout << _name << " is DEAD" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (is_ko())
		return;
	std::cout << "ClapTrap " << _name << " repairs itself of " << amount << " damage" << std::endl;
	_hit_points += amount;
	_energy_points--;
}
