#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
public:
	virtual void	makeSound(void) const;

	Dog(void);
	Dog(Dog const & obj);
	Dog	&operator=(Dog const & obj);
	virtual ~Dog();
};

#endif