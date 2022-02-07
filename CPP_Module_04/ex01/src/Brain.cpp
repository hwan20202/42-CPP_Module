#include "Brain.hpp"
#include <iostream>

std::string	Brain::getIdea(int idx) {
	return idea[idx];
}

void		Brain::setIdea(int idx, std::string content) {
	idea[idx] = content;
}

Brain::Brain(void) {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const & obj) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = obj;
}

Brain	&Brain::operator=(Brain const & obj) {
	std::cout << "Brain assignation operator called" << std::endl;
	if (this != &obj) {
		for (int i = 0; i < 100 && !((obj.idea)[i].empty()); i++) {
			idea[i] = (obj.idea)[i];
		}
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}
