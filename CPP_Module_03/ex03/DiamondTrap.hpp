#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string name;
	using FragTrap::HitPoints;
	using ScavTrap::EnergyPoints;
	using FragTrap::AttackDamage;
public:
	using ScavTrap::attack();
	
	DiamondTrap(/* args */);
	~DiamondTrap();
};

DiamondTrap::DiamondTrap(/* args */)
{
}

DiamondTrap::~DiamondTrap()
{
}


#endif