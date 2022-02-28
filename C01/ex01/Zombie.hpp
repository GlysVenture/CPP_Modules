//
// Created by Tadeusz Kondracki on 11/29/21.
//

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void	announce();
	void	gen_name(int ran_id);
	void	set_name(std::string name);

private:
	std::string	_name;
};

Zombie* zombieHorde( int N, std::string name );

Zombie* betterZombieHorde( int N);

#endif //ZOMBIE_HPP
