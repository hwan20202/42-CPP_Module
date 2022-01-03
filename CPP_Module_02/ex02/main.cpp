#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	Fixed		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

	// float	af(10.10);
	// int		tmp;

	// std::cout << std::bitset<32>(af) << std::endl;
	// tmp = af * (1 << 8);
	// std::cout << std::bitset<32>(tmp) << std::endl;
	// tmp = af * (1 << 12);
	// std::cout << std::bitset<32>(tmp) << std::endl;
	// tmp = af * (1 << 16);
	// std::cout << std::bitset<32>(tmp) << std::endl;
	// tmp = af * (1 << 20);
	// std::cout << std::bitset<32>(tmp) << std::endl;

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}