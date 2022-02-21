#include "Dog.hpp"

#include <iostream>
#include "Brain.hpp"

#define CYN "\e[0;36m"
#define NC "\e[0m"

void	Dog::makeSound(void) const {
	std::cout << CYN << "Bow-wow" << NC << std::endl;
}

Brain*	Dog::getBrain(void) const {
	return mBrain;
}

/************************************/
/*				OCCF				*/
/************************************/

Dog::Dog(): Animal("Dog") {
	mBrain = new Brain();
	std::cout << CYN << "Dog default constructor called" << NC << std::endl;
}

Dog::Dog(Dog const & obj) {
	mBrain = new Brain();
	std::cout << CYN << "Dog copy constructor called" << NC << std::endl;
	*this = obj;
}

Dog&	Dog::operator=(Dog const & obj) {
	std::cout << CYN << "Dog assignation operator called" << NC << std::endl;
	if (this != &obj) {
		type = obj.type;
		*mBrain = *obj.mBrain;
	}
	return *this;
}

Dog::~Dog() {
	std::cout << CYN << "Dog destructor called" << NC << std::endl;
	delete mBrain;
}
