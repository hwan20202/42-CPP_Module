#include "Animal.hpp"
#include <iostream>

std::string		Animal::getType(void) const {
	return type;
}

void			Animal::makeSound(void) const {
	std::cout << "some animal sound" << std::endl;
}

Animal::Animal(void) {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string _type): type(_type) {
	std::cout << "Animal constructor taking a type parameter called." << std::endl;
}


Animal::Animal(Animal const & obj) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = obj;
}


Animal&	Animal::operator=(Animal const & obj) {
	std::cout << "Animal assignation operator called" << std::endl;
	if (this != &obj) {
		type = obj.type;
	}
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}
