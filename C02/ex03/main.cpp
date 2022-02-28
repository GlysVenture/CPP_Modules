//
// Created by Tadeusz Kondracki on 2/28/22.
//

#include <iostream>
#include "Point.hpp"

bool bsp( Point a, Point b, Point c, Point point);

int main() {
	std::cout << "Starting..." << std::endl;

	Point a(0, 0);
	Point b(0, 5);
	Point c(5, 0);

	for (int i = -1; i < 5; i++)
	{
		Point point(3, i);

		if (bsp(a, b, c, point))
			std::cout << "point " << point << " is in triangle" << std::endl;
		else
			std::cout << "point " << point << " is outside" << std::endl;
	}



	return 0;
}
