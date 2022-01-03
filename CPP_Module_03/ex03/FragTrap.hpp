#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
    void highFivesGuys(void);

    FragTrap(void);
    FragTrap(std::string name);
    ~FragTrap();
};

void    FragTrap::guardGate(void)
{
    std::cout << "Highfive!!" << std::endl;
}

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
}


FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << "FragTrap initialized constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}


#endif