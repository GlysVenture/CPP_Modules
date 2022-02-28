//
// Created by tkondrac on 09.01.22.
//

#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed() {
	this->_val = 0;
}

Fixed::Fixed(int val){
	this->_val = val << Fixed::bits;
}

Fixed::Fixed(float val){
	this->setRawBits((int)lround((val * powf(2, Fixed::bits))));
}

Fixed::Fixed(const Fixed & inst) {
	*this = inst;
}

Fixed & Fixed::operator=(const Fixed &rhs) {
	this->_val = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed() { }

std::string Fixed::toString() const {
	std::string digits = std::to_string((int)pow(10 / 2, Fixed::bits) * (abs(this->_val) & ((int)powf(2, Fixed::bits) - 1)));
	std::string all;
	for (int i = Fixed::bits - digits.length(); i > 0 ; i--) { all += "0"; }
	digits = std::to_string(abs(this->_val) >> Fixed::bits)
			 + "."
			 + all
			 + digits;
	if (this->_val < 0)
		digits = "-" + digits;
	return digits;
}

int	Fixed::getRawBits() const {
	return this->_val;
}

void	Fixed::setRawBits(int const val) {
	this->_val = val;
}

float Fixed::toFloat() const {
	return (float)(this->_val) / powf(2, Fixed::bits);
}

int Fixed::toInt() const {
	return this->_val >> Fixed::bits;
}

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs )
{
	o << rhs.toFloat();
	return (o);
}
