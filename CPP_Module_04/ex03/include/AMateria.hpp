#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>

class ICharacter;

class AMateria {
protected:
	std::string	mType;
	bool		equiped;

public:
	std::string const &	getType() const;
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target) const;
	void				equip(void);
	void				unequip(void);
	bool				isequiped(void);

	AMateria(std::string const & type);
	
	AMateria(void);
	AMateria(AMateria const & obj);
	AMateria&	operator=(AMateria const & obj);
	virtual ~AMateria();
};

#endif