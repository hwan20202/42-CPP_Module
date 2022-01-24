#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
public:
	virtual void	makeSound(void) const;

	Cat(void);
	Cat(Cat const & obj);
	Cat	&operator=(Cat const & obj);
	virtual ~Cat();
};

#endif