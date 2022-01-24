#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	virtual AMateria*	clone() const;
	virtual	void		use(ICharacter& target);

	Cure(void);
	Cure(Cure const & obj);
	Cure&	operator=(Cure const & obj);
	virtual ~Cure();
};

#endif