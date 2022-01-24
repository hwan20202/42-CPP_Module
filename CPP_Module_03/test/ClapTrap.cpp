#include "ClapTrap.hpp"

/********************************************/
/*				public method				*/
/********************************************/

void	ClapTrap::attack(std::string const & target) const {
	std::cout << "ClapTrap <" << mName << "> attack <" << target
				<< ">, causing <" << mAD << "> points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int const amount) {
	std::cout << mclassName << " <" << mName
				<< "> take  <" << amount << "> points of damage!" << std::endl;
	mHP -= amount;
	if (mHP < 0)
		mHP = 0;
	std::cout << mclassName << " <" << mName
				<< "> current HP is <" << mHP << ">" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int const amount) {
	std::cout << mclassName << " <" << mName
				<< "> be repaired  <" << amount << "> points!" << std::endl;
	mHP += amount;
	if (mHP > static_cast<int>(mmaxHP))
		mHP = mmaxHP;
	std::cout << mclassName << " <" << mName
			<< "> current HP is <" << mHP << ">" << std::endl;
}

/********************************************/
/*			orthodox canonical form			*/
/********************************************/

ClapTrap::ClapTrap(void)
	:	mName(CLAP_CLASS_NAME), mHP(CLAP_CLASS_HP), mEP(CLAP_CLASS_EP), mAD(CLAP_CLASS_AD),
		mclassName(CLAP_CLASS_NAME), mmaxHP(CLAP_CLASS_HP), mmaxEP(CLAP_CLASS_EP), mmaxAD(CLAP_CLASS_AD) {
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & obj)
	:	mclassName(CLAP_CLASS_NAME),
		mmaxHP(CLAP_CLASS_HP), mmaxEP(CLAP_CLASS_EP), mmaxAD(CLAP_CLASS_AD) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = obj;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap default destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const & obj) {
	std::cout << "ClapTrap assignation operator called" << std::endl;
	if (this != &obj)
	{
		mName = obj.mName;
		mHP = obj.mHP;
		mEP = obj.mEP;
		mAD = obj.mAD;
	}
	return *this;
}

/********************************************/
/*				other constructor			*/
/********************************************/

ClapTrap::ClapTrap(std::string const name)
	:	mName(name), mHP(CLAP_CLASS_HP), mEP(CLAP_CLASS_EP), mAD(CLAP_CLASS_AD),
		mclassName(CLAP_CLASS_NAME), mmaxHP(CLAP_CLASS_HP), mmaxEP(CLAP_CLASS_EP), mmaxAD(CLAP_CLASS_AD) {
	    std::cout << "ClapTrap takes a name parameter constructor called" << std::endl;
}
