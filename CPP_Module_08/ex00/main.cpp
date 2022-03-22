#include "easyfind.hpp"
#include <iostream>
#include <iterator>
#include <list>
#include <vector>
#include <exception>

void	test_error() {
	std::list<int> li(5, 0);
	std::list<int>::iterator it;

	try {
		it = easyfind(li, 3);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

void	test_list() {
	int	arr[5] = { 1, 2, 3, 4, 5};
	std::list<int> li(5, 0);
	std::list<int>::iterator it;

	std::cout << "<<  test_list  >>" << std::endl;
	it = li.begin();
	for (int i = 0; i < 5; i++)
		*(it++) = arr[i];
	it = li.begin();
	for (int i = 0; i < 5; i++)
		std::cout << *(it++) << " ";
	std::cout << std::endl;

	std::list<int>::iterator ret;	
	try {
		ret = easyfind(li, 3);
		std::cout << "found : " << *ret << std::endl;
		std::cout << "next : " << *(++ret) << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

void	test_vector() {
	int	arr[5] = { 1, 2, 3, 4, 5};
	std::vector<int> li(5, 0);
	std::vector<int>::iterator it;

	std::cout << "<<  test_vector  >>" << std::endl;
	it = li.begin();
	for (int i = 0; i < 5; i++)
		*(it++) = arr[i];
	it = li.begin();
	for (int i = 0; i < 5; i++)
		std::cout << *(it++) << " ";
	std::cout << std::endl;

	std::vector<int>::iterator ret;	
	try {
		ret = easyfind(li, 3);
		std::cout << "found : " << *ret << std::endl;
		std::cout << "next : " << *(++ret) << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

int	main() {
	test_error();
	test_list();
	test_vector();

	return 0;
}
