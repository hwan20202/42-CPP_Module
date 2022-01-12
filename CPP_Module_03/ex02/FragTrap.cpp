#include "FragTrap.hpp"

/********************************************/
/*				public method				*/
/********************************************/

void	FragTrap::highFivesGuys(void) {
	std::cout << CYN << "Let's highfive!!" << NC << std::endl;
} 

/********************************************/
/*			orthodox canonical form			*/
/********************************************/

FragTrap::FragTrap(void): ClapTrap(FRAG_CLASS_NAME) {
	mHP = FRAG_CLASS_HP;
	mEP = FRAG_CLASS_EP;
	mAD = FRAG_CLASS_AD;
	*(const_cast<std::string*>(&mclassName)) = FRAG_CLASS_NAME;
	*const_cast<unsigned int*>(&mmaxHP) = FRAG_CLASS_HP;
	*const_cast<unsigned int*>(&mmaxEP) = FRAG_CLASS_EP;
	*const_cast<unsigned int*>(&mmaxAD) = FRAG_CLASS_AD;
    std::cout << CYN << "FragTrap default constructor called" << NC << std::endl;
}

FragTrap::FragTrap(FragTrap const & obj) {
    std::cout << CYN << "FragTrap copy constructor called" << NC << std::endl;
	*this = obj;
}

FragTrap &FragTrap::operator=(FragTrap const & obj) {
	std::cout << CYN << "FragTrap assignation operator called" << NC << std::endl;
	if (this != &obj) {
		mName = obj.GetName();
		mHP = obj.GetHP();
		mEP = obj.GetEP();
		mAD = obj.GetAD();
	}
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
	*(const_cast<std::string*>(&mclassName)) = FRAG_CLASS_NAME;
	*const_cast<unsigned int*>(&mmaxHP) = FRAG_CLASS_HP;
	*const_cast<unsigned int*>(&mmaxEP) = FRAG_CLASS_EP;
	*const_cast<unsigned int*>(&mmaxAD) = FRAG_CLASS_AD;
}
