#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

#include <string>

#define NAME	"undefined"

class Character : public ICharacter
{
private:
	std::string	mName;
	AMateria*	inventory[4];

	static const int	maxInventorySize = 4;
public:
	virtual std::string const &	getName() const;
	virtual void				equip(AMateria* m); //if inventory is full, dont do anything
	virtual void				unequip(int idx); //if inventory is empty, dont do anything // Must not delet Materia
	virtual void				use(int idx, ICharacter& target);

	Character(std::string const & name);

	Character(/* args */);
	Character(Character const & obj); //old materia must be deleted
	Character&	operator=(Character const & obj);
	~Character();
};

#endif