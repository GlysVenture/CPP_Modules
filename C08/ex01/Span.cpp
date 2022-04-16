//
// Created by tkondrac on 16.04.22.
//

#include "Span.hpp"
#include <stdexcept>
#include <algorithm>
#include <iostream>

Span::Span(): size(0) { }

Span::Span(const Span &inst): size(inst.size)
{
	*this = inst;
}

Span::Span(size_t len): size(len) { }

Span::~Span() { }

Span &Span::operator=(const Span &rhs)
{
	if(rhs.size > size)
		throw std::runtime_error("copy assignement operator target too small");
	tab = rhs.tab;
	return *this;
}

void Span::addNumber(int num)
{
	if (tab.size() >= size)
		throw std::runtime_error("can't add any more numbers to span");
	tab.push_back(num);
}

size_t Span::shortestSpan()
{
	size_t sh;
	std::vector<int> temp(tab);

	if (tab.size() < 2)
		throw std::runtime_error("not enough elements in span");
	std::sort(temp.begin(), temp.end());
	sh = temp[1] - temp[0];
	for (int i = 1; i < static_cast<int>(tab.size()) - 1; ++i)
	{
		if (static_cast<int>(sh) > temp[i + 1] - temp[i])
			sh = temp[i + 1] - temp[i];
	}
	return sh;
}

size_t Span::longestSpan()
{
	std::vector<int> temp(tab);

	if (tab.size() < 2)
		throw std::runtime_error("not enough elements in span");
	std::sort(temp.begin(), temp.end());
	return (temp.back() - temp.front());
}
