#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
public:
	virtual AMateria*	clone(void) const;
	virtual	void		use(ICharacter& target) const;

	Cure(void);
	Cure(Cure const & obj);
	Cure&	operator=(Cure const & obj);
	virtual ~Cure();
};

#endif