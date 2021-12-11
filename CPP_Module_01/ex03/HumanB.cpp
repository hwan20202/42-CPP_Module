#include "HumanB.hpp"

void HumanB::attack(void)
{
    if (_weapon)
        std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
    else
        std::cout << "no weapon" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}

HumanB::HumanB(std::string name)
{
    _name = name;
}

HumanB::~HumanB(void)
{

}
    