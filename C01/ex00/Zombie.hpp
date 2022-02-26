//
// Created by Tadeusz Kondracki on 11/29/21.
//

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
public:
	Zombie(std::string name);
	~Zombie();
	void	announce();

private:
	std::string	_name;
};

Zombie	*new_zombie(std::string name);

void	random_chump(std::string name);

#endif //ZOMBIE_HPP
