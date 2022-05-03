//
// Created by tkondrac on 16.04.22.
//

#include <iostream>
#include "array.tpp"

int main(){
	Array<int> malibu(5);
	Array<int> amaretto(malibu);

	malibu = amaretto;

	std::cout << "malibu 0: " << malibu[0] << std::endl;
	std::cout << "malibu 2: " << malibu[2] << std::endl;
	std::cout << "amaretto 2: " << amaretto[2] << std::endl;
	std::cout << "malibu[2] = 2;" << std::endl;
	malibu[2] = 2;
	std::cout << "malibu 2: " << malibu[2] << std::endl;
	std::cout << "amaretto 2: " << amaretto[2] << std::endl;
	std::cout << "malibu[" << malibu.size() << "] do exception?" << std::endl;
	std::cout << "malibu " << malibu.size() << ": " << malibu[5] << std::endl;
}
