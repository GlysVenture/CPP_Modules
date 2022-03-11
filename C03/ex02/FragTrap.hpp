//
// Created by Tadeusz Kondracki on 3/10/22.
//

#ifndef CPP_MODULES_SCAVTRAP_HPP
#define CPP_MODULES_SCAVTRAP_HPP

#include "ClapTrap.h"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &inst);
	~FragTrap();

	FragTrap &operator=(FragTrap const &rhs);

	void highFivesGuys();
	void attack(const std::string &target);
};


#endif //CPP_MODULES_SCAVTRAP_HPP
