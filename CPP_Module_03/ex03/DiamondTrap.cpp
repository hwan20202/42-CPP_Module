#include "DiamondTrap.hpp"

/********************************************/
/*				public method				*/
/********************************************/

void	DiamondTrap::attack(std::string const & target) const {
	ScavTrap::attack(target);
}

void	DiamondTrap::takeDamage(unsigned int const amount) {
	ScavTrap::takeDamage(amount);
}
void	DiamondTrap::beRepaired(unsigned int const amount){
	ScavTrap::beRepaired(amount);
}

void	DiamondTrap::whoAmI(void) const {
	std::cout << YEL << "Name is " << mName << std::endl;
	std::cout << "ClapTrap name is " << ClapTrap::mName << NC << std::endl;
}

/********************************************/
/*			orthodox canonical form			*/
/********************************************/

DiamondTrap::DiamondTrap(void): ClapTrap(), ScavTrap(), FragTrap(), mName(DIAMOND_CLASS_NAME) {
	std::cout << YEL << "DiamondTrap default constructor called" << NC << std::endl;
	ClapTrap::mName = mName + "_clap_name";
	mHP = FRAG_CLASS_HP;
	mEP = SCAV_CLASS_EP;
	mAD = FRAG_CLASS_AD;

	mmaxHP = FRAG_CLASS_HP;
	mmaxEP = SCAV_CLASS_EP;
	mmaxAD = FRAG_CLASS_AD;
}

DiamondTrap::DiamondTrap(DiamondTrap const & obj) {
	std::cout << YEL << "DiamondTrap copy constructor called" << NC << std::endl;
	*this = obj;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const & obj) {
	std::cout << YEL << "DiamondTrap assignation operator called" << NC << std::endl;
	if (this != &obj) {
		*(ClapTrap*)this = *(ClapTrap*)(&obj);
		ClapTrap::mName = obj.ClapTrap::mName;
		mName = obj.mName;
	}
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << YEL << "DiamondTrap destructor called" << NC << std::endl;
}

/********************************************/
/*				other constructor			*/
/********************************************/

DiamondTrap::DiamondTrap(std::string name): ClapTrap(), ScavTrap(), FragTrap(), mName(name) {
	std::cout << YEL << "DiamondTrap constructor taking name parameter called" << NC << std::endl;
	ClapTrap::mName = mName + "_clap_name";
	mHP = FRAG_CLASS_HP;
	mEP = SCAV_CLASS_EP;
	mAD = FRAG_CLASS_AD;

	mmaxHP = FRAG_CLASS_HP;
	mmaxEP = SCAV_CLASS_EP;
	mmaxAD = FRAG_CLASS_AD;
}
