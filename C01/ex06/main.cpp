//
// Created by Tadeusz Kondracki on 3/7/22.
//

#include "Karen.h"
#include <iostream>

const std::map<std::string, int> Karen::_map = Karen::createMap();

int main(int argc, char **argv) {
	Karen kk;

	if (argc != 2)
	{
		std::cout << "Invalid arguments" << std::endl;
		return 0;
	}
	kk.complain(argv[1]);
}
