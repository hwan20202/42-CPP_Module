#include "Array.hpp"
#include <iostream>

#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"

void	test_constructor(void) {
	Array<int>			empty1;			//empty array
	Array<double>		empty2(0);		//empty array
	Array<std::string>	normal(3);
	Array<int> 			outOfRange(-1);	//underflow
	// Array<int> outOfRange2(4294967296);		//overflow(warning case)
}

void	test_deepcopy(void) {
	Array<std::string>*	origin = new Array<std::string>(5);

	(*origin)[0] = std::string("hello");
	(*origin)[1] = std::string("im");
	(*origin)[2] = std::string("jeokim");
	(*origin)[3] = std::string("howare");
	(*origin)[4] = std::string("you");

	Array<std::string>	copy(*origin);	//copy constructor

	(*origin)[0] = std::string("hll");	//modify origin data
	(*origin)[1] = std::string("m");
	(*origin)[2] = std::string("jkm");
	(*origin)[3] = std::string("hwr");
	(*origin)[4] = std::string("y");

	for (int idx = 0; idx < 5; idx++) 	//print copied array
		std::cout << copy[idx] << std::endl;

	copy = *origin;						//assign modified array to 'copy' array
	delete origin;
	for (int idx = 0; idx < 5; idx++)	//print assigned array
		std::cout << copy[idx] << std::endl;
}

void	test_rangeException(void) {
	Array<int>	arr(5);

	try {	//access to normal index
		arr[1];
		std::cout << "Array access success" << std::endl;
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {	//access to underflow index
		arr[-1];
		std::cout << "Array access success" << std::endl;
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {	//access to out of range index
		arr[6];
		std::cout << "Array access success" << std::endl;
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

int	main(void) {
	std::cout << GRN;
	test_constructor();
	std::cout << RED;
	test_deepcopy();
	std::cout << CYN;
	test_rangeException();
	return 0;
}
