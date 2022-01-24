#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	virtual AMateria*	clone(void) const;
	virtual	void		use(ICharacter& target);

	Ice(void);
	Ice(Ice const & obj);
	Ice&	operator=(Ice const & obj);
	virtual ~Ice();
};

#endif