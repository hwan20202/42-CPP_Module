#include "Weapon.hpp"

/********************************************/
/*				member method				*/
/********************************************/

std::string const & Weapon::getType(void) const {
	return (mType);
}

void    Weapon::setType(std::string type) {
	mType = type;
}

/********************************************/
/*		constructor and destructor 			*/
/********************************************/

Weapon::Weapon(void) {
    std::cout << "Default constructor called" << std::endl;
}

Weapon::Weapon(std::string type): mType(type) {
    std::cout << "Initialized constructor called" << std::endl;
}
Weapon::~Weapon(void) {
	std::cout << "Destructor called" << std::endl;
}
