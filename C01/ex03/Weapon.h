//
// Created by Tadeusz Kondracki on 3/7/22.
//

#ifndef CPP_MODULES_WEAPON_H
#define CPP_MODULES_WEAPON_H


#include <string>

class Weapon
{
public:

	Weapon(const std::string& type);
	~Weapon();

	std::string getType() const;
	void setType(std::string type);

private:
	std::string _type;
};


#endif //CPP_MODULES_WEAPON_H
