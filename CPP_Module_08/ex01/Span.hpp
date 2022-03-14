#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <utility>

class Span {
private:
	std::vector<int> data;
	Span();

	std::pair<std::vector<int>::iterator,std::vector<int>::iterator> minmax(
		std::vector<int>::iterator first, std::vector<int>::iterator last) const;

public:
	Span(unsigned int);
	~Span();

	void	addNumber(int);
	unsigned int shortestSpan() const;
	unsigned int longestSpan() const;

	template <typename T>
	void	addNumber(T begin, T end) {
	for (T it = begin; it != end; it++) {
		if (data.size() > data.max_size())
			throw std::out_of_range("Out of range");
		data.push_back(*it);
	}
}

};

#endif