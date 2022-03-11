//
// Created by Tadeusz Kondracki on 3/10/22.
//

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap()
{
	_name = "Model 03";
	_attack_damage = 20;
	_energy_points = 50;
	_hit_points = 100;
	std::cout << _name << " FragTrap was born" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	_name = name;
	_attack_damage = 20;
	_energy_points = 50;
	_hit_points = 100;
	std::cout << _name << " FragTrap was born" << std::endl;
}

FragTrap::FragTrap(FragTrap const &inst)
{
	*this = inst;
}

FragTrap::~FragTrap()
{
	std::cout << _name << " FragTrap was smashed to bits" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
	_name = rhs._name;
	_attack_damage = rhs._attack_damage;
	_hit_points = rhs._hit_points;
	_energy_points = rhs._energy_points;
	return *this;
}

void FragTrap::attack(const std::string &target)
{
	if (is_ko())
		return;
	std::cout << "FragTrap " << _name << " attacks " << target << " causing " << _attack_damage << " frag damage" << std::endl;
	_energy_points--;
}

void FragTrap::highFivesGuys() {
	if (is_ko())
		return;
	std::cout << "FragTrap " << _name << " high fives somebody! " << std::endl;
	_energy_points--;
}
