#include "Span.hpp"

#include <iostream>
#include <vector>
#include <exception>
#include <numeric>
#include <algorithm>
#include <cstdlib>

Span::Span(unsigned int n) {
	data.reserve(n);

	std::cout << "Span constructor called" << std::endl;
}

Span::~Span() {

}

void	Span::addNumber(int num) {
	if (data.size() >= data.max_size())
		throw std::out_of_range("Out of range");
	data.push_back(num);
}

unsigned int Span::shortestSpan() const {
	std::vector<int> tmp_data(data.size());

	if (data.size() <= 1)
		throw std::out_of_range("");
	std::adjacent_difference(data.begin(), data.end(), tmp_data.begin());
	std::transform(tmp_data.begin(), tmp_data.end(), tmp_data.begin(), static_cast<int (*)(int)>(&std::abs));
	return *(minmax(tmp_data.begin() + 1, tmp_data.end()).first);
}

unsigned int Span::longestSpan() const {
	std::vector<int> tmp_data(data.size());

	if (data.size() <= 1)
		throw std::out_of_range("");
	std::adjacent_difference(data.begin(), data.end(), tmp_data.begin());
	std::transform(tmp_data.begin(), tmp_data.end(), tmp_data.begin(), static_cast<int (*)(int)>(&std::abs));
	return *(minmax(tmp_data.begin() + 1, tmp_data.end()).second);
}
