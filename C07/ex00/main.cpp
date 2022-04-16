//
// Created by tkondrac on 16.04.22.
//

#include <iostream>
#include "templates.tpp"

int main(){
	int a = 2;
	int b = 4;

	std::cout << "a: " << a << ", b: " << b << std::endl;
	swap(&a, &b);
	std::cout << "swap!" << std::endl;
	std::cout << "a: " << a << ", b: " << b << std::endl;
	int c = 5, d = 8;
	std::cout << "max(5, 8) = " << max(c, d) << std::endl;
	std::cout << "min(5, 8) = " << min(c, d) << std::endl;
}
