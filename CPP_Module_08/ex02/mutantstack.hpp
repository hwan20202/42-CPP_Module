#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <iterator>
#include <stack>

template <typename T>
class MutantStack: public std::stack<T> {
public:
	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator	begin() {
		return this->c.begin(); 
	}

	iterator	end() {
		return this->c.end();
	}

	MutantStack() {
		std::cout << "MutantStack default constructor called" << std::endl;
	}

	MutantStack(MutantStack const & rhs) {
		std::cout << "MutantStack copy constructor called" << std::endl;
		*this = rhs;
	}

	MutantStack& operator=(MutantStack const & rhs) {
		std::cout << "MutantStack assignation operator called" << std::endl;
		if (*this != rhs)
			this->c = rhs.c;
		return *this;
	}

	~MutantStack() {
		std::cout << "MutantStack destructor called" << std::endl;
	}
};

#endif
