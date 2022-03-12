#include "Span.hpp"
#include <vector>
#include <iostream>

int main() {
	std::vector<int> v1(10);
	Span s(10);

	v1[0] = 0;
	v1[1] = 2;
	v1[2] = 4;
	v1[3] = 6;
	v1[4] = 9;
	v1[5] = 8;
	v1[6] = 7;
	v1[7] = 6;
	v1[8] = 12;
	v1[9] = 0;

	for (int i = 0; i < 10; i++) {
		s.addNumber(v1[i]);
	}

	std::cout << s.shortestSpan() << std::endl;
	std::cout << s.longestSpan() << std::endl;
	return 0;
}

void	test_error_case() {
	//0 or 1 length case
	//add number over the capacity
}

void	test_general_case() {
	//random case under 10 length
}

void	test_big_length() {
	//random case upper 1000 length
}

void	test_special_case() {
	//all same value;
	//special first value
	//overflow or underflow case ex.)-2147483640 - 100000, 2147483647 - (-1000)
}