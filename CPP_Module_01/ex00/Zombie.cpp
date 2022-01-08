#include "Zombie.hpp"

/********************************************/
/*			public member method			*/
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
