#include "Dog.hpp"
#include <iostream>

#define CYN "\e[0;36m"
#define NC "\e[0m"

void	Dog::makeSound(void) const {
	std::cout << CYN << "Bow-wow" << NC << std::endl;
}

Dog::Dog(): Animal("Dog") {
	std::cout << CYN << "Dog default constructor called" << NC << std::endl;
}

Dog::Dog(Dog const & obj) {
	std::cout << CYN << "Dog copy constructor called" << NC << std::endl;
	*this = obj;
}

Dog	&Dog::operator=(Dog const & obj) {
	std::cout << CYN << "Dog assignation operator called" << NC << std::endl;
	if (this != &obj) {
		mType = obj.mType;
	}
	return *this;
}

Dog::~Dog() {
	std::cout << CYN << "Dog destructor called" << NC << std::endl;
}
