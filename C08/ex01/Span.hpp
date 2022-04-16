//
// Created by tkondrac on 16.04.22.
//

#ifndef CPP_MODULES_SPAN_HPP
#define CPP_MODULES_SPAN_HPP

#include <cstddef>
#include <vector>
#include <stdexcept>

class Span
{
public:
	Span();
	explicit Span(size_t len);
	Span(const Span &inst);
	~Span();

	Span &operator=(const Span &rhs);

	void	addNumber(int num);
	template< typename InputIt >
	void	addNumber(InputIt first, InputIt last );
	size_t	shortestSpan();
	size_t	longestSpan();

private:
	const size_t size;
	std::vector<int> tab;
};

template<typename InputIt>
void Span::addNumber(InputIt first, InputIt last)
{
	if (last - first + 1 > static_cast<long int>(size - tab.size()))
		throw std::runtime_error("can't add any more numbers to span");
	for ( ; first != last ; ++first) {
		tab.push_back(*first);
	}
	tab.push_back(*first);
}


#endif //CPP_MODULES_SPAN_HPP
