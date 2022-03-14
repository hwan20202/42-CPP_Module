#include "easyfind.hpp"
#include <iostream>
#include <array>
#include <iterator>
#include <list>
#include <exception>

int	main() {
	std::list<int> arr(5, 0);
	std::list<int>::iterator it;
	int	a = 5;


	*std::begin(arr) = 3;
	try {
		// it = easyfind(arr, 4);
		it = easyfind(a, 5);
		std::cout << *it << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}


	return 0;
}
