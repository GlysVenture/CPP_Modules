//
// Created by tkondrac on 16.04.22.
//

#include <vector>
#include <iostream>
#include "easyfind.tpp"

int main(){
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(5);
	vec.push_back(3);
	vec.push_back(-7);

	std::vector<int>::iterator found = easyfind(vec, 3);
	std::cout << *found << std::endl;
	std::cout << *++found << std::endl;
	if (++found == vec.end())
		std::cout << "success!" << std::endl;
}
