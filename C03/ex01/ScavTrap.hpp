//
// Created by Tadeusz Kondracki on 3/10/22.
//

#ifndef CPP_MODULES_SCAVTRAP_HPP
#define CPP_MODULES_SCAVTRAP_HPP

#include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &inst);
	~ScavTrap();

	ScavTrap &operator=(ScavTrap const &rhs);

	void guardGate();
	void attack(const std::string &target);
};


#endif //CPP_MODULES_SCAVTRAP_HPP
