#include "Span.hpp"
#include <vector>
#include <iostream>

int main() {
	Span	s(10);
	int a[10] = {1, 3, 4, 10, 11, 30, 41, 67, 100, 93};

	// for (int i = 0; i < 10; i++) {
	// 	std::cout << a[i] << std::endl;
	// }
	s.addNumber(a, a+10);

	std::cout << s.shortestSpan() << std::endl;
	std::cout << s.longestSpan() << std::endl;

	return 0;
}


void	test_error_case() {
	unsigned int	_short;
	unsigned int	_long;
	//0 or 1 length case
	Span	zero(1);
	try {
		_short =  zero.shortestSpan();
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		_long = zero.longestSpan();
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	zero.addNumber(1);
	try {
		_short =  zero.shortestSpan();
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		_long = zero.longestSpan();
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	//add number over the capacity
	Span	s(3);
	try {
		s.addNumber(1);
		s.addNumber(2);
		s.addNumber(3);
		s.addNumber(4);
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

void	test_general_case() {
	//random case under 10 length

}

void	test_big_length() {
	//random case upper 1000 length
}

void	test_special_case() {
	//all same value;
	int	allSame[10] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
	//special first value
	int	specialFirst[10] = {10, 5, 5, 5, 5, 5, 5, 5, 5, 5};
	//overflow or underflow case ex.) -2147483648 - 100000, 2147483647 - ( -1000 )
	int	overflow[10] = {-100, -2147483648, 100, 2147483647, 2147483647, -100, 2147483647, 1000, -2147483648, -2147483648};
}
