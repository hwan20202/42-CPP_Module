#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	static const std::string    minitialName;
	static const int			minitialHP;
	static const int			minitialEP;
	static const int			minitialAD;
	std::string	mName;
	int			mHP;
	int			mEP;
	int			mAD;
public:
	void	Attack(std::string const & target) const;
	void	TakeDamage(unsigned int amount);
	void	BeRepaired(unsigned int amount);
	std::string	GetName(void) const;
	int			GetHP(void) const;
	int			GetEP(void) const;
	int			GetAD(void) const;

	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap& obj);
	virtual ~ClapTrap();

	ClapTrap& operator=(ClapTrap& obj);
};

#endif