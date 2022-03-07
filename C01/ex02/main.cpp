//
// Created by Tadeusz Kondracki on 3/7/22.
//

#include <string>
#include <iostream>

int main(void) {
	std::string brain = std::string("HI_THIS_IS_BRAIN");
	std::string *brainPTR = &brain;
	std::string &brainREF = brain;

	std::cout << "   mem address of brain: " << &brain << std::endl;
	std::cout << "    content of brainPTR: " << brainPTR << std::endl;
	std::cout << "mem address of brainREF: " << &brainREF << std::endl;

	std::cout << "   value address of brain: " << brain << std::endl;
	std::cout << "value pointed by brainPTR: " << *brainPTR << std::endl;
	std::cout << "value pointed by brainREF: " << brainREF << std::endl;
}
