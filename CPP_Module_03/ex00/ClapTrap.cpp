#include "ClapTrap.hpp"
#include <cmath>

void	ClapTrap::Attack(std::string const & target) const
{
	std::cout << "ClapTrap <" << mName << "> attack <" << target
				<< ">, causing <" << mAD << "> points of damage!" << std::endl;
}

void	ClapTrap::TakeDamage(const unsigned int amount)
{
	std::cout << "ClapTrap <" << mName
				<< "> take  <" << amount << "> points of damage!" << std::endl;
	mHP = fmax(mHP - static_cast<int>(amount), 0);
	std::cout << "ClapTrap <" << mName
				<< "> current HP is <" << mHP << ">" << std::endl;
}

void	ClapTrap::BeRepaired(const unsigned int amount)
{
	std::cout << "ClapTrap <" << mName
				<< "> be repaired  <" << amount << "> points!" << std::endl;
	mHP = fmin(mHP + amount, mmaxHP);
	std::cout << "ClapTrap <" << mName
			<< "> current HP is <" << mHP << ">" << std::endl;
}

std::string	ClapTrap::GetName(void) const {
	return mName;
}

int			ClapTrap::GetHP(void) const {
	return mHP;
}

int			ClapTrap::GetEP(void) const {
	return mEP;
}

int			ClapTrap::GetAD(void) const {
	return mAD;
}

ClapTrap::ClapTrap(void)
	:	mName(CLAP_INIT_NAME),
		mHP(CLAP_INIT_HP), mEP(CLAP_INIT_EP), mAD(CLAP_INIT_AD),
		mmaxHP(CLAP_INIT_HP), mmaxEP(CLAP_INIT_EP), mmaxAD(CLAP_INIT_AD)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	:	mName(name),
		mHP(CLAP_INIT_HP), mEP(CLAP_INIT_EP), mAD(CLAP_INIT_AD),
		mmaxHP(CLAP_INIT_HP), mmaxEP(CLAP_INIT_EP), mmaxAD(CLAP_INIT_AD)
{
	std::cout << "ClapTrap taking name parameter constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& obj)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = obj;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap default destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap& obj)
{
	std::cout << "ClapTrap assignation operator called" << std::endl;
	if (this != &obj)
	{
		mName = obj.GetName();
		mHP = obj.GetHP();
		mEP = obj.GetEP();
		mAD = obj.GetAD();
	}
	return *this;
}
