#include "HumanB.hpp"

void	HumanB::attack(void) {
	if (mWeapon)
		std::cout << mName << " attacks with his " << mWeapon->getType() << std::endl;
	else
		std::cout << "no weapon" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) {
	mWeapon = &weapon;
}

HumanB::HumanB(std::string name): mName(name) {
	mWeapon = 0;
}

HumanB::HumanB(std::string name, Weapon &weapon): mName(name), mWeapon(&weapon) {

}

HumanB::~HumanB(void)
{

}
    