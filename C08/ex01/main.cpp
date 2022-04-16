//
// Created by tkondrac on 16.04.22.
//

#include <iostream>
#include "Span.hpp"

int main(){
	Span free(4);
	std::vector<int> v ;

	v.push_back(1);
	v.push_back(7);
	v.push_back(35);
	v.push_back(-11);
	free.addNumber(v.begin(), --v.end());
	try {
		free.addNumber(3);
	}
	catch (std::exception &e) {
		std::cout << "Caught: " << e.what() << std::endl;
	}
	std::cout << "longest span: " << free.longestSpan() << std::endl;
	std::cout << "shortest span: " << free.shortestSpan() << std::endl;
}
