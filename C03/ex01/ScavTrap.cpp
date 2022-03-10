//
// Created by Tadeusz Kondracki on 3/10/22.
//

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
{
	_name = "Model 02";
	_attack_damage = 20;
	_energy_points = 50;
	_hit_points = 100;
	std::cout << _name << " ScavTrap was born" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	_attack_damage = 20;
	_energy_points = 50;
	_hit_points = 100;
	std::cout << _name << " ScavTrap was born" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &inst)
{
	*this = inst;
}

ScavTrap::~ScavTrap()
{
	std::cout << _name << " ScavTrap was smashed to bits" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
	_name = rhs._name;
	_attack_damage = rhs._attack_damage;
	_hit_points = rhs._hit_points;
	_energy_points = rhs._energy_points;
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (is_ko())
		return;
	std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _attack_damage << " mental trauma" << std::endl;
	_energy_points--;
}

void ScavTrap::guardGate()
{
	if (is_ko())
		return;
	std::cout << "ScavTrap " << _name << " is in gatekeeper mode! " << std::endl;
	_energy_points--;
}
