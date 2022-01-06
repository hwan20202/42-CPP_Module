#include "HumanA.hpp"

/************************************/
/*			public method			*/
/************************************/

void	HumanA::attack(void) {
	std::cout << mName << " attacks with his " << mWeapon.getType() << std::endl;
}

/************************************/
/*	  constructor and destructor	*/
/************************************/

HumanA::HumanA(std::string name, Weapon &weapon): mName(name), mWeapon(weapon) {
	std::cout << "HumanA name and weapon initialized constructor called" << std::endl;
}

HumanA::~HumanA(void) {
	std::cout << "HumanA destructor called" << std::endl;
}
