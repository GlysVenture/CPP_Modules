//
// Created by tkondrac on 16.04.22.
//

#ifndef CPP_MODULES_TEMPLATES_TPP
#define CPP_MODULES_TEMPLATES_TPP

template<typename T>
void	swap(T * a, T * b){
	T c = *a;
	*a = *b;
	*b = c;
}

template<typename T>
T &min(T & a, T & b){
	return (a < b ? a : b);
}

template<typename T>
T &max(T & a, T & b){
	return (a > b ? a : b);
}

#endif //CPP_MODULES_TEMPLATES_TPP
