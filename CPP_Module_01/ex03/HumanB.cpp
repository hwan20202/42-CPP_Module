#include "HumanB.hpp"

/************************************/
/*			public method			*/
/************************************/

void	HumanB::attack(void) {
	if (mWeapon)
		std::cout << mName << " attacks with his " << mWeapon->getType() << std::endl;
	else
		std::cout << mName << "has no weapon" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) {
	mWeapon = &weapon;
}

/************************************/
/*	  constructor and destructor	*/
/************************************/

HumanB::HumanB(std::string name): mName(name) {
	std::cout << "HumanB name initialized constructor called" << std::endl;
	mWeapon = 0;
}

HumanB::HumanB(std::string name, Weapon &weapon): mName(name), mWeapon(&weapon) {
	std::cout << "HumanB name and weapon initialized constructor called" << std::endl;
}

HumanB::~HumanB(void) {
	std::cout << "HumanB destructor called" << std::endl;
}
    