#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal {
protected:
	std::string	type;
public:
	void			makeSound(void) const;
	std::string		getType(void) const;

	WrongAnimal(void);
	WrongAnimal(std::string type);
	WrongAnimal(WrongAnimal const & obj);
	WrongAnimal &operator=(WrongAnimal const & obj);
	virtual ~WrongAnimal(void);
};

#endif