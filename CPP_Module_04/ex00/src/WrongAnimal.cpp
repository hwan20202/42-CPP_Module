#include "WrongAnimal.hpp"
#include <iostream>

#define RED "\e[0;31m"
#define NC "\e[0m"

std::string		WrongAnimal::getType(void) const {
	return type;
}

void			WrongAnimal::makeSound(void) const {
	std::cout << RED << "some WrongAnimal sound" << NC << std::endl;
}

WrongAnimal::WrongAnimal(void) {
	std::cout << RED << "WrongAnimal default constructor called" << NC << std::endl;
}

WrongAnimal::WrongAnimal(std::string _type): type(_type) {
	std::cout << RED << "WrongAnimal constructor taking a type parameter called" << NC << std::endl;
}


WrongAnimal::WrongAnimal(WrongAnimal const & obj) {
	std::cout << RED << "WrongAnimal copy constructor called" << NC << std::endl;
	*this = obj;
}


WrongAnimal&	WrongAnimal::operator=(WrongAnimal const & obj) {
	std::cout << RED << "WrongAnimal assignation operator called" << NC << std::endl;
	if (this != &obj) {
		type = obj.type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << RED << "WrongAnimal destructor called" << NC << std::endl;
}
