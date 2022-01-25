#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#define DIAMOND_CLASS_NAME	"DiamondTrap"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string mName;

public:
	virtual void	attack(std::string const & target) const;
	virtual void	takeDamage(unsigned int const amount);
	virtual void	beRepaired(unsigned int const amount);

	void	whoAmI(void) const;

	DiamondTrap(void);
	DiamondTrap(DiamondTrap const & obj);
	DiamondTrap	&operator=(DiamondTrap const & obj);
	~DiamondTrap(void);
};

#endif