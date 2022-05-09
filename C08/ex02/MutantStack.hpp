//
// Created by tkondrac on 5/8/22.
//

#ifndef CPP_MODULES_MUTANTSTACK_HPP
#define CPP_MODULES_MUTANTSTACK_HPP

#include <stack>
#include <vector>

template<class T, class Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>
{
public:
	typedef typename Container::iterator iterator;

	MutantStack() { }
	MutantStack(const MutantStack<T, Container>& inst) { *this = inst; }
	~MutantStack() { };

	MutantStack<T, Container> &operator=(const MutantStack<T, Container> & rhs){
		this->c = rhs.c;
		return *this;
	}

	iterator begin(){
		return this->c.begin();
	}
	iterator end(){
		return this->c.end();
	}

private:

};


#endif //CPP_MODULES_MUTANTSTACK_HPP
