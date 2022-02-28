//
// Created by Tadeusz Kondracki on 2/28/22.
//

#ifndef CPP_MODULES_POINT_H
# define CPP_MODULES_POINT_H

# include "Fixed.hpp"

class Point {
public:

	Point();
	Point(const Fixed& x, const Fixed& y);
	Point(Point const & inst);
	~Point();

	Point &		operator=(Point const & rhs);
	std::string	toString() const;
	Fixed	getX() const;
	Fixed	getY() const;

private:
	Fixed const x;
	Fixed const y;
};

std::ostream &	operator<<( std::ostream & o, Point const & rhs );

#endif //CPP_MODULES_POINT_H
