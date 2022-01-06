#include "Fixed.hpp"
#include <iostream>

#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"
#define NC "\e[0m"

int main(void)
{
	// Fixed		a;
	// Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;

	float a = 0;
	float b = 0;
	float d = 2;
	Fixed A(a);
	Fixed B(b);
	Fixed D(d);

	std::cout << CYN << (a == b) << NC << " : "
				<< RED << (A == B)  << std::endl;

	std::cout << CYN << (a < b) << NC << " : "
				<< RED << (A < B)  << std::endl;

	std::cout << CYN << (d < b)  << NC << " : "
				<< RED << (D < B) << std::endl;

	std::cout << CYN << (d <= b) << NC << " : "
				<< RED << (D <= B) << std::endl;

	std::cout << CYN << (a <= b) << NC << " : "
				<< RED << (A <= B) << NC << std::endl;


	return 0;
}

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