#include "ClapTrap.hpp"
#include <cmath>

void    ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap <" << Name << "> attack <" << target
    << ">, causing <" << AttackDamage << "> points of damage!" << std::endl;
}
void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap <" << Name
    << "> take  <" << amount << "> points of damage!" << std::endl;
    HitPoints = std::fmax(HitPoints - amount, 0);
}
void    ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap <" << Name
    << "> be repaired  <" << amount << "> points!" << std::endl;
    HitPoints += amount;
}

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :Name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
    std::cout << "ClapTrap initailized constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap default destructor called" << std::endl;
}
