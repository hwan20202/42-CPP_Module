#include "DiamondTrap.hpp"

void	DiamondTrap::attack(std::string const & target) const {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) const {
	std::cout << "Name is " << mName << std::endl;
	std::cout << "ClapTrap name is " << ClapTrap::mName << std::endl;
}

DiamondTrap::DiamondTrap(void): ClapTrap(), ScavTrap(), FragTrap() {
	mName = DIAMOND_CLASS_NAME;
	ClapTrap::mName = mName + "_clap_name";
	mHP = FRAG_CLASS_HP;
	mEP = SCAV_CLASS_EP;
	mAD = FRAG_CLASS_AD;

	*const_cast<unsigned int *>(&mmaxHP) = FRAG_CLASS_HP;
	*const_cast<unsigned int *>(&mmaxEP) = SCAV_CLASS_EP;
	*const_cast<unsigned int *>(&mmaxAD) = FRAG_CLASS_AD;
}

DiamondTrap::DiamondTrap(DiamondTrap const & obj) {
	*this = obj;
}


DiamondTrap	&DiamondTrap::operator=(DiamondTrap const & obj) {
	if (this != &obj) {
		mName = obj.mName;
		ClapTrap::mName = obj.ClapTrap::mName;
		mHP = obj.mHP;
		mEP = obj.mEP;
		mAD = obj.mAD;
	}
	return *this;
}


DiamondTrap::~DiamondTrap() {

}
