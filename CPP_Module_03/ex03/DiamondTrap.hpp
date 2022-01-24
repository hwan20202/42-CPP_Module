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
	void	attack(std::string const & target) const;
	void	whoAmI(void) const;

	DiamondTrap(void);
	DiamondTrap(DiamondTrap const & obj);
	DiamondTrap	&operator=(DiamondTrap const & obj);
	~DiamondTrap(void);
};

#endif