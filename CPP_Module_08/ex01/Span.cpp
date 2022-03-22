#include "Span.hpp"
#include <iostream>
#include <vector>
#include <exception>
#include <numeric>

Span::Span(unsigned int n) : max_size(n) {
	std::cout << "Span constructor called" << std::endl;
}

Span::Span(Span const & rhs) : max_size(rhs.max_size) {
	std::cout << "Span copy constructor called" << std::endl;
	*this = rhs;
}

Span&	Span::operator=(Span const & rhs) {
	std::cout << "Span assignation operator called" << std::endl;
	if (this != &rhs)
		data = rhs.data;
	return *this;
}

Span::~Span() {
	std::cout << "Span destructor called" << std::endl;
}

void	Span::addNumber(int num) {
	data.insert(num);
	if (data.size() > max_size)
		throw OutOfSize();
}

int Span::shortestSpan() const {
	std::vector<int> v(data.size());
	std::set<int> s;

	if (data.size() <= 1)
		throw SpanDoesNotExist();
	std::adjacent_difference(data.begin(), data.end(), v.begin());
	for (std::vector<int>::iterator it = ++v.begin(); it != v.end(); it++)
		s.insert(*it);
	return *s.begin();
}

int Span::longestSpan() const {
	if (data.size() <= 1)
		throw SpanDoesNotExist();
	return *data.rbegin() - *data.begin();
}
