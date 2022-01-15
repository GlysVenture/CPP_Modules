//
// Created by Tadeusz Kondracki on 11/28/21.
//

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include "Contact.h"

#define PH_SIZE 3

class Phonebook
{
public:
	Phonebook();
	~Phonebook();

	void	add();
	void	search();

private:
	void	print_tab();
	int		num;
	Contact contacts[8];
};


#endif //PHONEBOOK_H
