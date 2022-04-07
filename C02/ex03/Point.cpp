//
// Created by Tadeusz Kondracki on 2/28/22.
//

#include "Point.hpp"

Point::Point(): x(0), y(0) { }

Point::Point(const Fixed& x, const Fixed& y): x(x),  y(y) { }

Point::Point(Point const & inst): x(inst.x), y(inst.y) { }

Point::~Point() { }

std::string Point::toString() const {
	return "x: " + std::to_string(this->x.toFloat()) + " y: " + std::to_string(this->y.toFloat());
}

Point &Point::operator=(const Point &rhs)
{
	(void) rhs;
	std::cerr << "Point class has const member, you can't copy assign it!" << std::endl;
	return *this;
}

Fixed Point::getX() const
{
	return Fixed(this->x);
}

Fixed Point::getY() const
{
	return Fixed(this->y);
}

std::ostream &	operator<<( std::ostream & o, Point const & rhs )
{
	o << rhs.toString() ;
	return (o);
}
