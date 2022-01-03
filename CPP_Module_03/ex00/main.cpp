#include "ClapTrap.hpp"

void ShowStat(ClapTrap& obj)
{
	std::cout << "NAME	: [" << obj.GetName() << "]" << std::endl;
	std::cout << "HP	: [" << obj.GetHP() << "]" << std::endl;
	std::cout << "EP	: [" << obj.GetEP() << "]" << std::endl;
	std::cout << "AD	: [" << obj.GetAD() << "]" << std::endl;
}

int main(void)
{
	ClapTrap noName;
	ClapTrap yesName("jeokim");
	ClapTrap copyMan(yesName);

	ShowStat(noName);
	ShowStat(yesName);
	ShowStat(copyMan);

	noName.Attack("yesman");
	noName.TakeDamage(5);
	noName.TakeDamage(6);
	noName.BeRepaired(5);
	noName.BeRepaired(6);
	ShowStat(noName);

	yesName.Attack("yesman");
	yesName.TakeDamage(5);
	yesName.TakeDamage(6);
	yesName.BeRepaired(5);
	yesName.BeRepaired(6);
	ShowStat(yesName);

	return 0;
}