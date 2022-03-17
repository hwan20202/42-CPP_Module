#include "easyfind.hpp"
#include <iostream>
#include <iterator>
#include <list>
#include <vector>
#include <exception>

void	test_list();


int	main() {
	// std::list<int> arr(5, 0);
	// std::list<int>::iterator it;

	// *(arr.begin()) = 3;
	// std::cout << *arr.begin() << std::endl;
	// std::cout << *(++arr.begin()) << std::endl;
	// try {
	// 	it = easyfind(arr, 0);
	// 	std::cout << *it << std::endl;
	// } catch (std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }

	test_list();

	return 0;
}

void	test_list() {
	int	arr[5] = { 1, 2, 3, 4, 5};
	std::list<int> li(5, 0);
	std::list<int>::iterator it;

	it = li.begin();
	for (int i = 0; i < 5; i++)
		*(it++) = arr[i];
	it = li.begin();
	for (int i = 0; i < 5; i++)
		std::cout << *(it++) << std::endl;

	std::list<int>::iterator ret;	
	try {
		ret = easyfind(li, 5);
		std::cout << *ret << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

void	test_vector() {
	std::vector<int> v(5, 0);
	std::vector<int>::iterator it;

	*std::begin(v) = 3;
	try {
		easyfind(v, 3);
		std::cout << *it << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
