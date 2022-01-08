#include "Karen.hpp"
#include <iostream>

int main(int argc, char **argv) {
	Karen k;

	if (argc != 2) {
		std::cout << "input argument" << std::endl;
		return 1;
	}
	k.complain(argv[1]);
	return 0;
}
