#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

#define CLAP_INIT_NAME	"default"
#define CLAP_INIT_HP	10
#define CLAP_INIT_EP	10
#define CLAP_INIT_AD	0

class ClapTrap
{
private:
	std::string	mName;
	int			mHP;
	int			mEP;
	int			mAD;

	const std::string	mdefaultName;
	const unsigned int	mmaxHP;
	const unsigned int	mmaxEP;
	const unsigned int	mmaxAD;
public:
	void		Attack(std::string const & target) const;
	void		TakeDamage(unsigned int amount);
	void		BeRepaired(unsigned int amount);
	std::string	GetName(void) const;
	int			GetHP(void) const;
	int			GetEP(void) const;
	int			GetAD(void) const;

	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap& obj);
	~ClapTrap();

	ClapTrap&	operator=(ClapTrap& obj);
};

#endif