#include "HumanA.hpp"

void	HumanA::attack(void) {
	std::cout << mName << " attacks with his " << mWeapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon): mName(name), mWeapon(weapon) {
	std::cout << "Initialized constructor called" << std::endl;
}

HumanA::~HumanA(void) {
	std::cout << "Destructor called" << std::endl;
}
