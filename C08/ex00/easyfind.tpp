//
// Created by tkondrac on 16.04.22.
//

#ifndef CPP_MODULES_EASYFIND_H
#define CPP_MODULES_EASYFIND_H

#include <iterator>

template<typename T>
typename T::iterator easyfind(T &container, int i){
	typename T::iterator iter = container.begin();
	while (iter != container.end()){
		if (*iter == i)
			return iter;
		iter++;
	}
	return container.end();
}

#endif //CPP_MODULES_EASYFIND_H
