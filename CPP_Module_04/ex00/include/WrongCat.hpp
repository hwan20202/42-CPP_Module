#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
public:
	void	makeSound(void) const;

	WrongCat(void);
	WrongCat(WrongCat const & obj);
	WrongCat&	operator=(WrongCat const & obj);
	virtual ~WrongCat();
};

#endif