#ifndef SPAN_HPP
#define SPAN_HPP

#include <set>
#include <exception>

class Span {
private:
	std::multiset<int>	data;
	unsigned int	max_size;

	class OutOfSize : public std::exception {
	public:
		const char *what() const throw();
	};
	class SpanDoesNotExist : public std::exception {
	public:
		const char *what() const throw();
	};

	Span();
public:
	Span(unsigned int);
	Span(Span const &);
	Span& operator=(Span const &);
	~Span();

	void	addNumber(int);
	int		shortestSpan() const;
	int		longestSpan() const;

	template <typename T>
	void	addNumber(T begin, T end) {
	for (T it = begin; it != end; it++) {
		data.insert(*it);
		if (data.size() > max_size)
			throw OutOfSize();
		}
	};
};

#endif