#include "Span.hpp"
#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>

void	test_error_case();
void	test_general_case();
void	test_special_case();
void	test_big_length();

int main() {
	test_error_case();
	test_general_case();
	test_special_case();
	test_big_length();

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

void	test_big_length() {
	Span s(2000);
	std::srand(std::time(0));
	//random case upper 1000 length
	for (int i = 0; i < 2000; i++) {
		int val = std::rand() % 10;
		s.addNumber(val);
	}
	std::cout << s.longestSpan() << std::endl
				<< s.shortestSpan() << std::endl;
}

void	test_general_case() {
	Span sa(10);
	Span sb(10);
	Span sc(10);
	int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	sa.addNumber(a, a + 10);
	int b[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	sb.addNumber(b, b + 10);
	int c[10] = { -100, 200, 30, 5, 1, -40, -190, 2, -100, 70 };
	sc.addNumber(c, c + 10);

	std::cout << "sa longest span : " << sa.longestSpan() << std::endl
				<< "sa shortest span : " << sa.shortestSpan() << std::endl
				<< "sb longest span : " << sb.longestSpan() << std::endl
				<< "sb shortest span : " << sb.shortestSpan() << std::endl
				<< "sc longest span : " << sc.longestSpan() << std::endl
				<< "sc shortest span : " << sc.shortestSpan() << std::endl;
}

void	test_special_case() {
	Span sallSame(10);
	Span sspecialFirst(10);
	Span soverflow(10);
	
	//all same value;
	int	allSame[10] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
	sallSame.addNumber(allSame, allSame + 10);

	//special first value
	int	specialFirst[10] = {10, 5, 5, 5, 5, 5, 5, 5, 5, 5};
	sspecialFirst.addNumber(specialFirst, specialFirst + 10);

	//overflow or underflow case ex.) -2147483648 - 100000, 2147483647 - ( -1000 )
	int	overflow[10] = {-100, -2147483648, 100, 2147483647, 2147483647, -100, 2147483647, 1000, -2147483648, -2147483648};
	soverflow.addNumber(overflow, overflow + 10);

	std::cout << "sallSame longest span : " << sallSame.longestSpan() <<std::endl
				<< "sallSame shortest span : " << sallSame.shortestSpan() <<std::endl
				<< "sspecialFirst longest span : " << sspecialFirst.longestSpan() <<std::endl
				<< "sspecialFirst shortest span : " << sspecialFirst.shortestSpan() <<std::endl
				<< "soverflow longest span : " << soverflow.longestSpan() <<std::endl
				<< "soverflow shortest span : " << soverflow.shortestSpan() <<std::endl;
}
