#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class	Brain;

class	Dog: public Animal {
private:
	Brain*	mBrain;

public:
	virtual void	makeSound(void) const;
	Brain*	getBrain(void) const;

	Dog(void);
	Dog(Dog const & obj);
	Dog	&operator=(Dog const & obj);
	virtual ~Dog();
};

#endif