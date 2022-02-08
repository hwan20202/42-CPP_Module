#include "ScavTrap.hpp"

/********************************************/
/*				public method				*/
/********************************************/

void    ScavTrap::attack(std::string const & target) const {
	std::cout << GRN << "ScavTrap <" << mName << "> attack <" << target
				<< ">, causing <" << mAD << "> points of damage!" << NC << std::endl;
}

void	ScavTrap::takeDamage(unsigned int const amount) {
	std::cout << GRN << "ScavTrap <" << mName
				<< "> take  <" << amount << "> points of damage!" << NC << std::endl;
	mHP -= amount;
	if (mHP < 0)
		mHP = 0;
	std::cout << GRN << "ScavTrap <" << mName
				<< "> current HP is <" << mHP << ">" << NC << std::endl;
}

void	ScavTrap::beRepaired(unsigned int const amount) {
	std::cout << GRN << "ScavTrap <" << mName
				<< "> be repaired  <" << amount << "> points!" << NC << std::endl;
	mHP += amount;
	if (mHP > (int)mmaxHP)
		mHP = mmaxHP;
	std::cout << GRN << "ScavTrap <" << mName
			<< "> current HP is <" << mHP << ">" << NC << std::endl;
}

void	ScavTrap::guardGate(void) const {
    std::cout << GRN << "ScavTrap " << mName << " have enterred in Gate keeper mode" << NC << std::endl;
}

/********************************************/
/*			orthodox canonical form			*/
/********************************************/

ScavTrap::ScavTrap(): ClapTrap(SCAV_CLASS_NAME) {
	mHP		= SCAV_CLASS_HP;
	mEP		= SCAV_CLASS_EP;
	mAD		= SCAV_CLASS_AD;
	mmaxHP = SCAV_CLASS_HP;
	mmaxEP = SCAV_CLASS_EP;
	mmaxAD = SCAV_CLASS_AD;
    std::cout << GRN << "ScavTrap default constructor called" << NC << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & obj) {
    std::cout << GRN << "ScavTrap copy constructor called" << NC << std::endl;
	*this = obj;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const & obj) {
	std::cout << GRN << "ScavTrap assignation operator called" << NC << std::endl;
	if (this != &obj)
		*(ClapTrap*)this = *(ClapTrap*)(&obj);
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
	mmaxHP = SCAV_CLASS_HP;
	mmaxEP = SCAV_CLASS_EP;
	mmaxAD = SCAV_CLASS_AD;
}
