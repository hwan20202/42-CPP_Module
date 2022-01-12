#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

#define CLAP_CLASS_NAME	"ClapTrap"
#define CLAP_CLASS_HP	10
#define CLAP_CLASS_EP	10
#define CLAP_CLASS_AD	0

class ClapTrap {
private:
	std::string	mName;
	int			mHP;
	int			mEP;
	int			mAD;

	std::string const	mclassName;
	unsigned int const	mmaxHP;
	unsigned int const	mmaxEP;
	unsigned int const	mmaxAD;
public:
	void		attack(std::string const & target) const;
	void		takeDamage(unsigned int const amount);
	void		beRepaired(unsigned int const amount);
	std::string	GetName(void) const;
	int			GetHP(void) const;
	int			GetEP(void) const;
	int			GetAD(void) const;
	int			GetMaxHP(void) const;
	int			GetMaxEP(void) const;
	int			GetMaxAD(void) const;

	ClapTrap(void);
	ClapTrap(std::string const name);
	ClapTrap(ClapTrap const & obj);
	~ClapTrap();

	ClapTrap&	operator=(ClapTrap const & obj);
};

#endif