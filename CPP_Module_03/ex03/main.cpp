#include "DiamondTrap.hpp"

// void ShowStat(DiamondTrap& obj)
// {
// 	std::cout << "NAME	: [" << obj.GetName() << "]" << std::endl;
// 	std::cout << "HP	: [" << obj.GetHP() << "]" << std::endl;
// 	std::cout << "EP	: [" << obj.GetEP() << "]" << std::endl;
// 	std::cout << "AD	: [" << obj.GetAD() << "]" << std::endl;
// }

int main(void)
{
	DiamondTrap noName;
	// FragTrap yesName("jeokim");
	// FragTrap copyMan(yesName);

	// ShowStat(noName);
	// ShowStat(yesName);
	// ShowStat(copyMan);

	noName.attack("yesman");
	noName.takeDamage(5);
	noName.takeDamage(6);
	noName.beRepaired(5);
	noName.beRepaired(6);
	// ShowStat(noName);

	noName.whoAmI();

	// yesName.attack("yesman");
	// yesName.takeDamage(5);
	// yesName.takeDamage(6);
	// yesName.beRepaired(5);
	// yesName.beRepaired(6);
	// ShowStat(yesName);

	return 0;
}