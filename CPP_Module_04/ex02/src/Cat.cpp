#include "Cat.hpp"
#include <iostream>
#include "Brain.hpp"

#define NC "\e[0m"
#define GRN "\e[0;32m"

void	Cat::makeSound(void) const {
	std::cout << GRN << "Meow-meow" << NC << std::endl;
}

Brain*	Cat::getBrain(void) const {
	return mBrain;
}

/************************************/
/*				OCCF				*/
/************************************/

Cat::Cat(): Animal("Cat") {
	mBrain = new Brain();
	std::cout << GRN << "Cat default constructor called" << NC << std::endl;
}

Cat::Cat(Cat const & obj): Animal("Cat") {
	mBrain = new Brain();
	std::cout << GRN << "Cat copy constructor called" << NC << std::endl;
	*this = obj;
}

Cat	&Cat::operator=(Cat const & obj) {
	std::cout << GRN << "Cat assignation operator called" << NC << std::endl;
	if (this != &obj) {
		type = obj.type;
		*mBrain = *obj.mBrain;
	}
	return *this;
}

Cat::~Cat() {
	std::cout << GRN << "Cat destructor called" << NC << std::endl;
	delete mBrain;
}
