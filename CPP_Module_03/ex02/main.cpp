#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap st1("cron");
	std::string targetName = "jeokim";
	
	st1.attack(targetName);
	st1.beRepaired(10);
	st1.takeDamage(10);

	return (0);
}