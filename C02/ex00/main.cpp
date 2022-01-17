#include <iostream>
#include "Fixed.hpp"

int	main() {
	Fixed	c(-1);
	Fixed	d(2);

	std::cout << c << std::endl;
	std::cout << d << std::endl;
	d.setRawBits(1);
	std::cout << d << std::endl;
	std::cout << c + d << std::endl;
	return (0);
}
