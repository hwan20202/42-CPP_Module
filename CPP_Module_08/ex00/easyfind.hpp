#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iterator>
#include <iostream>

#include "DoesNotFound.hpp"

template <typename T>
typename T::iterator	easyfind(T t, int num) {
	typename T::iterator it = std::find(t.begin(), t.end(), num);
	if (*it != num)
		throw DoesNotFound();
	std::cout << "it = " << *it << std::endl;
	return it;
}

#endif