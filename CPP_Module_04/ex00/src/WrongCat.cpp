#include "WrongCat.hpp"
#include <iostream>

#define REDB "\e[41m"
#define NC "\e[0m"

void	WrongCat::makeSound(void) const {
	std::cout << REDB << "Meow-meow" << NC << std::endl;
}

/************************************/
/*				OCCF				*/
/************************************/

WrongCat::WrongCat(): WrongAnimal("WrongCat") {
	std::cout << REDB << "WrongCat default constructor called" << NC << std::endl;
}

WrongCat::WrongCat(WrongCat const & obj) {
	std::cout << REDB << "WrongCat copy constructor called" << NC << std::endl;
	*this = obj;
}

WrongCat&	WrongCat::operator=(WrongCat const & obj) {
	std::cout << REDB << "WrongCat assignation operator called" << NC << std::endl;
	if (this != &obj) {
		type = obj.type;
	}
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << REDB << "WrongCat destructor called" << NC << std::endl;
}
