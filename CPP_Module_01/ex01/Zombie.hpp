#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
	std::string	mName;

public:
	void			announce(void) const;
	void			setName(std::string name);

	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif