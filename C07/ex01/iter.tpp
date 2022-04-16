//
// Created by tkondrac on 16.04.22.
//

#ifndef CPP_MODULES_ITER_TPP
#define CPP_MODULES_ITER_TPP

#include <cstdlib>

template<typename T>
void	iter(T * addr, size_t size, void func(T & elem)){
	for (size_t i = 0; i < size; ++i) {
		func(addr[i]);
	}
}

template<typename T>
void	iter(T * addr, size_t size, void func(T elem)){
	for (size_t i = 0; i < size; ++i) {
		func(addr[i]);
	}
}

#endif //CPP_MODULES_ITER_TPP
