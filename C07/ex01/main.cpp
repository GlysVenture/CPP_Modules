//
// Created by tkondrac on 16.04.22.
//

#include <iostream>
#include "iter.tpp"

void	add(int & i){
	i++;
}

void	print(int i){
	std::cout << i << std::endl;
}

void print_tab(int *tab, size_t size){
	if (size < 1)
		return;
	std::cout << "tab: [" << tab[0];
	for (size_t i = 1; i < size; ++i)
		std::cout << ", " << tab[i];
	std::cout << "]" <<std::endl;
}

int main(){
	int tab[5] = {3, 5 ,1 , 4, 9};

	print_tab(tab, 5);
	iter(tab, 5, add);
	print_tab(tab, 5);
	iter(tab, 5, print);
}
