// #include "test.hpp"
#include <limits.h>
#include <iostream>

#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"

int main() {
	int	af(1 << 22);
	// int bf(10000);
	int		tmp;

	std::cout << RED << "af : " << af << NC << std::endl;
	std::cout << RED << "af : " << std::bitset<32>(af) << NC << std::endl;
	tmp = af * (1 << 8);
	std::cout << GRN << "af << 8 : " << tmp << NC << std::endl;
	std::cout << GRN << "af << 8 : " << std::bitset<32>(tmp) << NC << std::endl;





	// tmp = af * (1 << 8);
	// std::cout << std::bitset<32>(tmp) << std::endl;
	// tmp = af * (1 << 12);
	// std::cout << std::bitset<32>(tmp) << std::endl;
	// tmp = af * (1 << 16);
	// std::cout << std::bitset<32>(tmp) << std::endl;
	// tmp = af * (1 << 20);
	// std::cout << std::bitset<32>(tmp) << std::endl;

	return 0;
}