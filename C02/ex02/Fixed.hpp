//
// Created by tkondrac on 09.01.22.
//

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed {

public:
	Fixed();
	Fixed(int val);
	Fixed(float val);
	Fixed(Fixed const & inst);
	~Fixed();

	Fixed &	operator=(Fixed const & rhs);
	Fixed	operator+(Fixed const & rhs) const;
	Fixed	operator-(Fixed const & rhs) const;
	Fixed	operator*(Fixed const & rhs) const;
	Fixed	operator/(Fixed const & rhs) const;
	bool	operator<(const Fixed &rhs) const;
	bool	operator>(const Fixed &rhs) const;
	bool	operator<=(const Fixed &rhs) const;
	bool	operator>=(const Fixed &rhs) const;
	bool	operator==(const Fixed &rhs) const;
	bool	operator!=(const Fixed &rhs) const;
	Fixed	operator++();
	Fixed	operator--();
	Fixed	operator++(int);
	Fixed	operator--(int);

	float		toFloat() const;
	int			toInt() const;
	std::string	toString() const;
	int			getRawBits() const;
	void		setRawBits(int val);

	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static Fixed const &min(const Fixed &a, const Fixed &b);
	static Fixed const &max(const Fixed &a, const Fixed &b);

private:
	int _val;
	const static int bits = 8;
};

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs );

#endif //FIXED_H
