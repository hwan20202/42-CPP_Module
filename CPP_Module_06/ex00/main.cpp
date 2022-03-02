#include <iostream>
#include <string>
#include "Convert.hpp"

int	main(int argc, char** argv) {
	if (argc != 2)
		return 1;
	std::string s(argv[1]);
	Convert	con(s);

	std::cout << con << std::endl;
	return 0;
}
