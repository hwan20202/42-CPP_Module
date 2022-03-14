#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iterator>
#include <exception>
// #include <array>
// #include <list>

class	DoesNotFound: public std::exception {
public:
	const char * what() const throw();
};

template <typename T>
typename T::iterator	easyfind(T t, int num) {
	typename T::iterator it;

	it = std::find(t.begin(), t.end(), num);
	if (*it != num)
		throw DoesNotFound();
	return it;
}

#endif