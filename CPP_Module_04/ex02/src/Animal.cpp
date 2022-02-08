#include "Animal.hpp"
#include <iostream>

#define RED "\e[0;31m"
#define NC "\e[0m"

std::string		Animal::getType(void) const {
	return type;
}

void			Animal::makeSound(void) const {
	std::cout << "some animal sound" << std::endl;
}

Animal::Animal(std::string const & _type): type(_type) {
	std::cout << "Animal constructor taking a string parameter called." << std::endl;
}

/************************************/
/*				OCCF				*/
/************************************/

Animal::Animal(void) {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const & obj) {
	std::cout << "Animal copy constructor called" << std::endl
				<< "but doesn't make sense" << std::endl;
	*this = obj;
}

Animal &Animal::operator=(Animal const & obj) {
	std::cout << "Animal assignation operator called" << std::endl
				<< "but doesn't make sense" << std::endl;
	(void)obj;
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

