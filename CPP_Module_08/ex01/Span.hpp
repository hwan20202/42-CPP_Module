#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <utility>

class Span
{
private:
	std::vector<int> data;
	Span();

	//don't need template, consider only integer parameter
	template <typename It>
	std::pair<It,It> minmax(It first, It last) const {
		It min = first;
		It max = first;

		if (first > last)
			throw std::out_of_range("first iterator is later than last iterator");
		for (It it = first + 1; it != last; it++) {
			if (*it < *min)
				min = it;
			if (*it > *max)
				max = it;
		}
		return std::pair<It, It>(min, max);
	}

public:
	Span(unsigned int);
	~Span();

	void	addNumber(int);
	unsigned int shortestSpan() const;
	unsigned int longestSpan() const;
};

#endif