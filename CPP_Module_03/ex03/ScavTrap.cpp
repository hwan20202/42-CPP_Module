#include "ScavTrap.hpp"

/********************************************/
/*				public method				*/
/********************************************/

void	ScavTrap::guardGate(void) const {
    std::cout << GRN << "ScavTrap have enterred in Gate keeper mode" << NC << std::endl;
}

/********************************************/
/*			orthodox canonical form			*/
/********************************************/

ScavTrap::ScavTrap(): ClapTrap(SCAV_CLASS_NAME) {
	mHP		= SCAV_CLASS_HP;
	mEP		= SCAV_CLASS_EP;
	mAD		= SCAV_CLASS_AD;
	*(const_cast<std::string*>(&mclassName)) = SCAV_CLASS_NAME;
	*(const_cast<unsigned int*>(&mmaxHP)) = SCAV_CLASS_HP;
	*(const_cast<unsigned int*>(&mmaxEP)) = SCAV_CLASS_EP;
	*(const_cast<unsigned int*>(&mmaxAD)) = SCAV_CLASS_AD;
    std::cout << GRN << "ScavTrap default constructor called" << NC << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & obj) {
    std::cout << GRN << "ScavTrap copy constructor called" << NC << std::endl;
	*this = obj;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const & obj) {
	std::cout << GRN << "ScavTrap assignation operator called" << NC << std::endl;
	if (this != &obj)
	{
		mName = obj.GetName();
		mHP = obj.GetHP();
		mEP = obj.GetEP();
		mAD = obj.GetAD();
	}
	return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << GRN << "ScavTrap destructor called" << NC << std::endl;
}

/********************************************/
/*				other constructor			*/
/********************************************/

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name) {
    std::cout << GRN << "ScavTrap takes a name parameter constructor called" << NC << std::endl;
	mHP		= SCAV_CLASS_HP;
	mEP		= SCAV_CLASS_EP;
	mAD		= SCAV_CLASS_AD;
	*(const_cast<std::string*>(&mclassName)) = SCAV_CLASS_NAME;
	*(const_cast<unsigned int*>(&mmaxHP)) = SCAV_CLASS_HP;
	*(const_cast<unsigned int*>(&mmaxEP)) = SCAV_CLASS_EP;
	*(const_cast<unsigned int*>(&mmaxAD)) = SCAV_CLASS_AD;
}
