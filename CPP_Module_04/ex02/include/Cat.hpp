#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class	Brain;

class	Cat: public Animal {
private:
	Brain*	mBrain;
	
public:
	virtual void	makeSound(void) const;
	Brain*	getBrain(void) const;

	Cat(void);
	Cat(Cat const & obj);
	Cat	&operator=(Cat const & obj);
	virtual ~Cat();
};

#endif