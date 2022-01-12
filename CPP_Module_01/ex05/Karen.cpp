#include "Karen.hpp"
#include <iostream>

/************************************/
/*			private method			*/
/************************************/

void	Karen::debug(void) {
	std::cout << "[DEBUG]" << std::endl
				<< "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger."
				<< std::endl << "I just love it!" << std::endl;
}

void    Karen::info(void) {
	std::cout << "[INFO]" << std::endl
				<< "I cannot believe adding extra bacon cost more money. You don’t put enough!"
				<< std::endl << "If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void) {
	std::cout << "[WARNING]" << std::endl
				<< "I think I deserve to have some extra bacon for free." << std::endl
				<< "I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void) {
	std::cout << "[ERROR]" << std::endl
				<< "This is unacceptable, I want to speak to the manager now." << std::endl;
}

/************************************/
/*			public method			*/
/************************************/

void	Karen::complain(std::string level) {
	t_compass	arr[4] = {
		{"debug", &Karen::debug},
		{"info", &Karen::info},
		{"warning", &Karen::warning},
		{"error", &Karen::error}
	};

	for(int i = 0; i < 4; i++) {
		if (arr[i].funcName == level) {
			(this->*(arr[i].f))();
			return ;
		}
	}
	std::cout << "no fucntion" << std::endl;
}

/************************************/
/*	  constructor and destructor	*/
/************************************/

Karen::Karen(void) {

}

Karen::~Karen(void) {

}