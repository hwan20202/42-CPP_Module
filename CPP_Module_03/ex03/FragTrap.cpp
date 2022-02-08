#include "FragTrap.hpp"

/********************************************/
/*				public method				*/
/********************************************/

void	FragTrap::attack(std::string const & target) const {
	std::cout << CYN << "FragTrap <" << mName << "> attack <" << target
				<< ">, causing <" << mAD << "> points of damage!" << NC << std::endl;
}

void	FragTrap::takeDamage(unsigned int const amount) {
	std::cout << CYN << "FragTrap <" << mName
				<< "> take  <" << amount << "> points of damage!" << NC << std::endl;
	mHP -= amount;
	if (mHP < 0)
		mHP = 0;
	std::cout << CYN << "FragTrap <" << mName
				<< "> current HP is <" << mHP << ">" << NC << std::endl;
}

void	FragTrap::beRepaired(unsigned int const amount) {
	std::cout << CYN << "FragTrap <" << mName
				<< "> be repaired  <" << amount << "> points!" << NC << std::endl;
	mHP += amount;
	if (mHP > (int)mmaxHP)
		mHP = mmaxHP;
	std::cout << CYN << "FragTrap <" << mName
			<< "> current HP is <" << mHP << ">" << NC << std::endl;
}

void	FragTrap::highFivesGuys(void) const {
	std::cout << CYN << "Let's highfive!!" << NC << std::endl;
} 

/********************************************/
/*			orthodox canonical form			*/
/********************************************/

FragTrap::FragTrap(void): ClapTrap(FRAG_CLASS_NAME) {
	mHP = FRAG_CLASS_HP;
	mEP = FRAG_CLASS_EP;
	mAD = FRAG_CLASS_AD;
	mmaxHP = FRAG_CLASS_HP;
	mmaxEP = FRAG_CLASS_EP;
	mmaxAD = FRAG_CLASS_AD;
    std::cout << CYN << "FragTrap default constructor called" << NC << std::endl;
}

FragTrap::FragTrap(FragTrap const & obj) {
    std::cout << CYN << "FragTrap copy constructor called" << NC << std::endl;
	*this = obj;
}

FragTrap &FragTrap::operator=(FragTrap const & obj) {
	std::cout << CYN << "FragTrap assignation operator called" << NC << std::endl;
	if (this != &obj)
		*(ClapTrap*)this = *(ClapTrap*)(&obj);
	return *this;
}

FragTrap::~FragTrap() {
    std::cout << CYN << "FragTrap destructor called" << NC << std::endl;
}

/********************************************/
/*				other constructor			*/
/********************************************/

FragTrap::FragTrap(std::string name): ClapTrap(name) {
    std::cout << CYN << "FragTrap takes a name parameter constructor called" << NC << std::endl;
	mHP = FRAG_CLASS_HP;
	mEP = FRAG_CLASS_EP;
	mAD = FRAG_CLASS_AD;
	mmaxHP = FRAG_CLASS_HP;
	mmaxEP = FRAG_CLASS_EP;
	mmaxAD = FRAG_CLASS_AD;
}
