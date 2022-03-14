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

std::pair<std::vector<int>::iterator, std::vector<int>::iterator> Span::minmax(
	std::vector<int>::iterator first, std::vector<int>::iterator last) const {
	std::vector<int>::iterator min = first;
	std::vector<int>::iterator max = first;

	if (first > last)
		throw std::out_of_range("first iterator is later than last iterator");
	for (std::vector<int>::iterator it = first + 1; it != last; it++) {
		if (*it < *min)
			min = it;
		if (*it > *max)
			max = it;
	}
	return std::pair<std::vector<int>::iterator, std::vector<int>::iterator>(min, max);
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
