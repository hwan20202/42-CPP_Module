#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
protected:
	std::string	type;
public:
	virtual void	makeSound(void) const = 0;
	std::string		getType(void) const;

	Animal(void);
	Animal(Animal const & obj);
	Animal&	operator=(Animal const & obj);
	virtual ~Animal(void);

	Animal(std::string const & type);
};

#endif