//
// Created by Tadeusz Kondracki on 3/7/22.
//

#include <string>
#include <iostream>
#include "Weapon.h"
#include "HumanA.h"
#include "HumanB.h"

int main(void) {
	Weapon golden = Weapon("Golden Halberd");
	Weapon uchikatana = Weapon("Uchikatana");

	HumanA boss = HumanA("Tree sentinel" , golden);
	HumanB player = HumanB("The Samurai");

	boss.attack();
	player.attack();
	golden.setType("Erdtree Shield");
	boss.attack();
	player.setWeapon(uchikatana);
	player.attack();
}
