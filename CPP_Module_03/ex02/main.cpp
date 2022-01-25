#include "FragTrap.hpp"

void ShowStat(FragTrap& obj)
{
	std::cout << "NAME	: [" << obj.GetName() << "]" << std::endl;
	std::cout << "HP	: [" << obj.GetHP() << "]" << std::endl;
	std::cout << "EP	: [" << obj.GetEP() << "]" << std::endl;
	std::cout << "AD	: [" << obj.GetAD() << "]" << std::endl;
}

int main(void)
{
	FragTrap noName;
	FragTrap yesName("jeokim");
	FragTrap copyMan(yesName);


	ShowStat(noName);
	ShowStat(yesName);
	ShowStat(copyMan);

	noName.attack("yesman");
	noName.takeDamage(5);
	ShowStat(noName);

	copyMan = noName;
	ShowStat(copyMan);

	yesName.attack("yesman");
	yesName.takeDamage(5);
	yesName.takeDamage(6);
	yesName.beRepaired(5);
	yesName.beRepaired(6);
	ShowStat(yesName);

	yesName.highFivesGuys();
	
	return 0;
}