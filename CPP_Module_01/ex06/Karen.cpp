#include "Karen.hpp"
#include <iostream>

/************************************/
/*			private method			*/
/************************************/

std::string	Karen::funcMap[MSGCOUNT + 1] = { "debug", "info", "warning", "error", "insignificant" };

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

void	Karen::insignificant(void) {
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

/************************************/
/*			public method			*/
/************************************/

void	Karen::complain(std::string level) {
	int idx = 0;

	while (idx < MSGCOUNT + 1) {
		if (funcMap[idx] == level)
			break;
		idx++;
	}
	
	switch(idx) {
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break ;
		default:
			insignificant();
	}
}

/************************************/
/*	  constructor and destructor	*/
/************************************/

Karen::Karen(void) {

}

Karen::~Karen(void) {

}