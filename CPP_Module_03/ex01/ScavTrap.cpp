#include "ScavTrap.hpp"

void	ScavTrap::GuardGate(void) const
{
    std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}

ScavTrap::ScavTrap(): ClapTrap(SCAV_INIT_NAME)
{
	mHP		= SCAV_INIT_HP;
	mEP		= SCAV_INIT_EP;
	mAD		= SCAV_INIT_AD;
	// *(const_cast<int*>(&minitialHP)) = SCAV_INIT_HP;
	// *(const_cast<int*>(&minitialEP)) = SCAV_INIT_EP;
	// *(const_cast<int*>(&minitialAD)) = SCAV_INIT_AD;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	mHP		= minitialHP;
	mEP		= minitialEP;
	mAD		= minitialAD;
	*(const_cast<int*>(&minitialHP)) = SCAV_INIT_HP;
	*(const_cast<int*>(&minitialEP)) = SCAV_INIT_EP;
	*(const_cast<int*>(&minitialAD)) = SCAV_INIT_AD;
    std::cout << "ScavTrap initialized constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& obj)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = obj;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap& obj)
{
	if (this != &obj)
	{
		mName = obj.GetName();
		mHP = obj.GetHP();
		mEP = obj.GetEP();
		mAD = obj.GetAD();
	}
	return *this;
}