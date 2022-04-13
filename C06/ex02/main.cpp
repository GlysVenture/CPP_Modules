//
// Created by Tadeusz Kondracki on 4/14/22.
//

#include <iostream>
#include "Classes.hpp"

Base	*generate(void);
void	identify(Base* p);
void	identify(Base& p);

int main(){
	Base *random = generate();
	identify(random);
	identify(*random);
	delete random;
}

Base	*generate(void){
	std::srand(std::time(NULL));

	switch (std::rand() % 3)
	{
		case 0: return(static_cast<Base *>(new A()));
		case 1: return(static_cast<Base *>(new B()));
		case 2: return(static_cast<Base *>(new C()));
	}
	return (NULL);
}

void	identify(Base* p){
	if(dynamic_cast<A *>(p))
		std::cout << "Identified pointer to A class" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Identified pointer to B class" << std::endl;
	else
		std::cout << "Identified pointer to C class" << std::endl;
}

void	identify(Base& p){
	try {
		(void)dynamic_cast<A &>(p);
		std::cout << "Identified reference to A class" << std::endl;
		return;
	}
	catch (...) {};
	try {
		(void)dynamic_cast<B &>(p);
		std::cout << "Identified reference to B class" << std::endl;
		return;
	}
	catch (...) {};
	try {
		(void)dynamic_cast<C &>(p);
		std::cout << "Identified reference to C class" << std::endl;
		return;
	}
	catch (...) {};
	std::cout << "something went wrong with refs" << std::endl;
}
