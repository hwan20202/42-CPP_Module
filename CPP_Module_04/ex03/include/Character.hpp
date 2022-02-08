#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "ICharacter.hpp"

#define NAME	"undefined"

class Character : public ICharacter {
private:
	std::string	mName;
	AMateria*	inventory[4];

	static const int	maxInventorySize = 4;
	

public:
	virtual std::string const &	getName() const;
	virtual void				equip(AMateria* m);
	virtual void				unequip(int idx);
	virtual void				use(int idx, ICharacter& target);

	Character(std::string const & name);

	Character(void);
	Character(Character const & obj);
	Character&	operator=(Character const & obj);
	~Character();
};

#endif