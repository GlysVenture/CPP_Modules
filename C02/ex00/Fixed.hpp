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
	Fixed(Fixed const & inst);
	~Fixed();

	Fixed &	operator=(Fixed const & rhs);
	Fixed	operator+(Fixed const & rhs) const;

	std::string	toString() const;
	int			getRawBits() const;
	void		setRawBits(int const val);

private:
	int _val;
	const static int bits = 8;

};

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs );

#endif //FIXED_H
