#include "Zombie.hpp"

/********************************************/
/*			static member method			*/
/********************************************/

Zombie	*Zombie::newZombie(std::string name) {
	Zombie *z = new Zombie;

	z->mName = name;
	return z;
}

void	Zombie::randomChump(std::string name) {
	Zombie z(name);

	z.announce();
}

/********************************************/
/*			nonstatic member method			*/
/********************************************/

void	Zombie::announce(void) const {
    std::cout << "<" << mName << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

/********************************************/
/*		constructor and destructor 			*/
/********************************************/

Zombie::Zombie(void): mName("zombie") {
	std::cout << "Default constructor called" << std::endl;
}

Zombie::Zombie(std::string name): mName(name) {
	std::cout << "Initialized constructor called" << std::endl;
}

Zombie::~Zombie(void) {
    std::cout << "<" << mName << "> " << "destroyed" << std::endl;
}
