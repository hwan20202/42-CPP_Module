#include "Fixed.hpp"
#include <iostream>

#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"
#define NC "\e[0m"

int main( void ) {

	//given test in subject
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	//arithmetic operation test
	Fixed f1(10.5f);
	Fixed f2(2);
	Fixed f3(-2);

	//comparison operation test
	float af = 0;
	float bf = 0;
	float cf = 2;
	Fixed A(af);
	Fixed B(bf);
	Fixed C(cf);

	//given test in subject
	std::cout << GRN;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << NC << std::endl;

	//arithmetic operation test
	std::cout << CYN;
	std::cout << "10.5 + 2 = " << f1 + f2 << std::endl;
	std::cout << "10.5 - 2 = " << f1 - f2 << std::endl;
	std::cout << "10.5 * 2 = " << f1 * f2 << std::endl;
	std::cout << "10.5 * -2 = " << f1 * f3 << std::endl;
	std::cout << "10.5 / 2 = " << f1 / f2 << std::endl;
	std::cout << "10.5 / -2 = " << f1 / f3 << NC << std::endl;

	//comparison operation test
	std::cout << GRN << (af == bf) << NC << " : "
				<< RED << (A == B)  << std::endl;
	std::cout << GRN << (af < bf) << NC << " : "
				<< RED << (A < B)  << std::endl;
	std::cout << GRN << (cf < bf)  << NC << " : "
				<< RED << (C < B) << std::endl;
	std::cout << GRN << (cf <= bf) << NC << " : "
				<< RED << (C <= B) << std::endl;
	std::cout << GRN << (af <= bf) << NC << " : "
				<< RED << (A <= B) << NC << std::endl;

	return 0;
}
