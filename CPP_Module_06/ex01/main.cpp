#include "Data.hpp"
#include <iostream>

#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"

uintptr_t	serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

void	test(void) {
	Data*		player = newData(std::string("jeokim"), 42.42, 24.24, 100, 0);
	uintptr_t	uit;
	Data*		copy;

	std::cout << CYN << "player status(before serialization)" << std::endl
				<< NC << *player << std::endl
				<< CYN << "player ptr(before serialization) : "
				<< NC << player << std::endl;

	uit = serialize(player);
	std::cout << NC  << "uit(dec) : "
				<< uit << std::endl
				<< "uit(hex) : " << std::hex
				<< RED << uit << std::dec << std::endl;

	copy = deserialize(uit);
	std::cout << GRN << "player ptr(after deserialization) : "
				<< NC << copy << std::endl
				<< GRN << "player status(after deserialization)" << std::endl
				<< NC << *copy << NC << std::endl;

	delete player;
}

int		main() {
	test();

	return 0;
}