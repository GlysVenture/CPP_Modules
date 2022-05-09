//
// Created by tkondrac on 5/8/22.
//

#include <stack>
#include <vector>
#include <iostream>
#include <list>
#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack); //todo ???
	//List tests
	std::cout << "List tests:" << std::endl;
	MutantStack<int, std::list<int> > m_list;
	m_list.push(1);
	m_list.push(2);
	std::cout << "top: " << m_list.top() << std::endl;
	m_list.pop();
	std::cout << "size: " << m_list.size() << std::endl;

	MutantStack<int, std::list<int> > h_list;
	h_list = m_list;
	std::cout << "top: " << h_list.top() << std::endl;
	h_list.pop();
	std::cout << "size: " << h_list.size() << std::endl;
	return 0;
}
