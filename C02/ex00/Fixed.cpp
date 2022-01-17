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

Fixed::Fixed(const Fixed & inst) {
	*this = inst;
}

Fixed & Fixed::operator=(const Fixed &rhs) {
	this->_val = rhs._val;
	return (*this);
}

Fixed::~Fixed() { }

std::string Fixed::toString() const {
	return std::to_string(this->_val >> Fixed::bits)
		+ "."
		+ std::to((this->_val & ((int)pow(2, Fixed::bits) - 1)), "0") //todo
		+ std::to_string(390625 * this->_val & ((int)pow(2, Fixed::bits) - 1));
}

int	Fixed::getRawBits() const {
	return this->_val;
}

void	Fixed::setRawBits(int const val) {
	this->_val = val;
}

Fixed Fixed::operator+(const Fixed &rhs) const {
	Fixed	temp;
	temp.setRawBits(this->_val + rhs._val);
	return temp;
}

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs )
{
	o << rhs.toString();
	return (o);
}
