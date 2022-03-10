//
// Created by Tadeusz Kondracki on 3/10/22.
//

#ifndef CPP_MODULES_CLAPTRAP_H
#define CPP_MODULES_CLAPTRAP_H

#include <string>

class ClapTrap
{
private:
	std::string 	_name;
	unsigned int	_hit_points;
	unsigned int	_energy_points;
	unsigned int	_attack_damage;

	bool	is_ko();

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &inst);
	~ClapTrap();

	ClapTrap &operator=(ClapTrap const &rhs);

	void attack(const std::string & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif //CPP_MODULES_CLAPTRAP_H
