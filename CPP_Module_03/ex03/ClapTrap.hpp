#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
    std::string Name;
    int HitPoints;
    int EnergyPoints;
    int AttackDamage;
public:
    void    attack(std::string const & target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    void    setEnergyPoints(int amount);
    void    setAttackDamage(int amount);

    ClapTrap(void);
    ClapTrap(std::string name);
    virtual ~ClapTrap();
};




#endif