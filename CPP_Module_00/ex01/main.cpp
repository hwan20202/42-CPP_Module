#include <iostream>
#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	pb;

	if (pb.run())
		std::cout << "ERROR" << std::endl;
	return 0;
}
