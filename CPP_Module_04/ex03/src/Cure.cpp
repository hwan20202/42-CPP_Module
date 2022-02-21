#include "Cure.hpp"
#include "ICharacter.hpp"
#include <iostream>

AMateria*	Cure::clone(void) const {
	return new Cure();
}

void		Cure::use(ICharacter& target) const {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::Cure(void):	AMateria("cure") {
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(Cure const & obj) {
	std::cout << "Cure copy constructor called, but why?" << std::endl
				<< "but doesn't make sense" << std::endl;
	*this = obj;
}

Cure&	Cure::operator=(Cure const & obj) {
	std::cout << "Cure assignation operator called, but why?" << std::endl
				<< "but doesn't make sense" << std::endl;
	(void)obj;
	return *this;
}

Cure::~Cure() {
	std::cout << "Cure destructor called" << std::endl;
}
