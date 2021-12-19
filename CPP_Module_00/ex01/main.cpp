#include <iostream>
#include "phoneBook.hpp"

int main(void)
{
	std::string line;
	phoneBook	pb;


	std::cout << "[ADD] : add contact to phone book" << std::endl
				<< "[SEARCH] : search the contact to find" << std::endl;
	while (true)
	{
		std::cin >> line;
		if (std::cin.eof() || std::cin.fail() || line == "EXIT")
			break ;
		if (line == "ADD")
			pb.add();
		else if (line == "SEARCH")
			pb.search();
		else
			std::cout << "command that doesn't exist" << std::endl;
	}
	std::cout << line << " : program has exited." << std::endl;
	return (0);
}