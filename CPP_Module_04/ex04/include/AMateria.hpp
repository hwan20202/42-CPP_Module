#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
// #include "ICharacter.hpp"

class ICharacter;

class AMateria
{
private:
	std::string	mType;
public:
	AMateria(std::string const & type);

	std::string const &	getType() const;
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);

	AMateria(void);
	AMateria(AMateria const & obj);
	AMateria	&operator=(AMateria const & obj);
	virtual ~AMateria();
};

#endif