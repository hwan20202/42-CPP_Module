#include <iostream>
#include "phoneBook.hpp"

int main(void)
{
	phoneBook	pb;

	if (pb.run())
		std::cout << "ERROR" << std::endl;
	return (0);
}