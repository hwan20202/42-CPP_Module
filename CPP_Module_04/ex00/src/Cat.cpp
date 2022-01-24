#include "Cat.hpp"
#include <iostream>

#define NC "\e[0m"
#define GRN "\e[0;32m"

void	Cat::makeSound(void) const {
	std::cout << GRN << "Meow-meow" << NC << std::endl;
}

Cat::Cat(): Animal("Cat") {
	std::cout << GRN << "Cat default constructor called" << NC << std::endl;
}

Cat::Cat(Cat const & obj) {
	std::cout << GRN << "Cat copy constructor called" << NC << std::endl;
	*this = obj;
}

Cat	&Cat::operator=(Cat const & obj) {
	std::cout << GRN << "Cat assignation operator called" << NC << std::endl;
	if (this != &obj) {
		mType = obj.mType;
	}
	return *this;
}

Cat::~Cat() {
	std::cout << GRN << "Cat destructor called" << NC << std::endl;
}
