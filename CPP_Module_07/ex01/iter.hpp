#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>
#include <typeinfo>
#include <iostream>

template <typename T>
void	iter(T* p, size_t n, void (*f)(T)) {
	if (!p || !n || !f)
		return ;
	std::cout << "iter < " << typeid(T).name() << " > executed" << std::endl;
	for (size_t idx = 0; idx < n; idx++) {
		f(p[idx]);
	}
	std::cout << "iter function finished" << std::endl;
}

template <typename T>
void	func(T param) {
	std::cout << "func result : " << param << std::endl;
}

#endif