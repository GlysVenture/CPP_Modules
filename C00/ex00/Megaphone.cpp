//
// Created by Tadeusz Kondracki on 11/28/21.
//

#include <iostream>
#include <cstring>

int	main(int argc, char **argv) {
	int j;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else {
		j = 1;
		while (j < argc) {
			for (int i = 0; i < (int)std::strlen(argv[j]); i++)
				std::cout << (char)std::toupper(argv[j][i]);
			j++;
		}
		std::cout << std::endl;
	}
}
