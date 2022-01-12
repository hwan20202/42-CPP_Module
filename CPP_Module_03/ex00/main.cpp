#include "ClapTrap.hpp"

#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"

void	ShowStat(ClapTrap& obj) {
	std::cout << "NAME	: [" << obj.GetName() << "]" << std::endl;
	std::cout << "HP	: [" << obj.GetHP() << "]" << std::endl;
	std::cout << "EP	: [" << obj.GetEP() << "]" << std::endl;
	std::cout << "AD	: [" << obj.GetAD() << "]" << std::endl;
}

int		main(void) {
	ClapTrap	noName;
	ClapTrap	yesName("jeokim");
	ClapTrap	copyMan(yesName);

	ShowStat(noName);
	ShowStat(yesName);
	ShowStat(copyMan);

	noName.attack("yesman");
	noName.takeDamage(5);
	noName.takeDamage(6);
	noName.beRepaired(5);
	noName.beRepaired(6);
	ShowStat(noName);

	yesName.attack("yesman");
	yesName.takeDamage(5);
	yesName.takeDamage(6);
	yesName.beRepaired(5);
	yesName.beRepaired(6);
	ShowStat(yesName);

	return 0;
}