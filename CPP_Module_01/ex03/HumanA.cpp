#include "HumanA.hpp"

void HumanA::attack(void)
{
    std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon):_weapon(weapon) // member initializer
{
    _name = name;
}

HumanA::~HumanA(void)
{
    
}