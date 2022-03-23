//
// Created by tadeu on 3/15/2022.
//

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main()
{
	Animal* zoo[5];

	zoo[0] = new Cat();
	zoo[1] = new Dog();
	zoo[2] = new Dog();
	zoo[3] = new Cat();
	zoo[4] = new Dog(*(Dog *)zoo[2]);

	zoo[2]->getBrain().addIdea("hello", 3);
	zoo[4]->getBrain().addIdea("bye", 3);
	zoo[2]->getBrain().printIdea(3);
	zoo[4]->getBrain().printIdea(3);

	delete zoo[0];
	delete zoo[1];
	delete zoo[2];
	delete zoo[3];
	delete zoo[4];

	return 0;
}
