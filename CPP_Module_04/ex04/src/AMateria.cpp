#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

std::string	const &	AMateria::getType(void) const {
	return mType;
}

void		AMateria::use(ICharacter& target) {
	std::cout << target.getName() << std::endl;
}

AMateria::AMateria(std::string const & type): mType(type) {
	std::cout << "AMateria constructor taking string parameter called" << std::endl;
}

AMateria::AMateria(void) {
	std::cout << "AMateria defualt constructor called" << std::endl;
}

AMateria::AMateria(AMateria const & obj) {
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = obj;
}

AMateria	&AMateria::operator=(AMateria const & obj) {
	std::cout << "AMateria assignation operator called" << std::endl;
	if (this != &obj) {
		mType = obj.mType;
	}
	return *this;
}
AMateria::~AMateria() {
	std::cout << "AMateria destructor called" << std::endl;
}
