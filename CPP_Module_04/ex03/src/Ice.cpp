#include "Ice.hpp"
#include "ICharacter.hpp"
#include <iostream>

AMateria*	Ice::clone(void) const {
	return new Ice();
}

void		Ice::use(ICharacter& target) const {
	std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}

Ice::Ice(void):	AMateria("ice") {
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(Ice const & obj) {
	std::cout << "Ice copy constructor called" << std::endl
				<< "but doesn't make sense" << std::endl;
	*this = obj;
}

Ice&	Ice::operator=(Ice const & obj) {
	std::cout << "Ice assignation operator called" << std::endl
				<< "but doesn't make sense" << std::endl;
	(void)obj;
	return *this;
}

Ice::~Ice() {
	std::cout << "Ice destructor called" << std::endl;
}
