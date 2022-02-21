#include "Data.hpp"

#include <iostream>

int	main() {
	Data*		player = new Data(std::string("jeokim"), 42.42, 24.24, 100, 0);
	uintptr_t	uit;
	Data*		copy;

	std::cout << "player status(before serialization)" << std::endl
				<< *player << std::endl;
	std::cout << "player ptr(before serialization) : " << player << std::endl;

	uit = serialize(player);
	std::cout  << "uit(dec) : " << uit << std::endl;
	std::cout  << "uit(hex) : " << std::hex << uit << std::dec << std::endl;

	copy = deserialize(uit);
	std::cout << "player ptr(after deserialization) : " << copy << std::endl;
	std::cout << "player status(after deserialization)" << std::endl
				<< *copy << std::endl;

	delete player;
	return 0;
}