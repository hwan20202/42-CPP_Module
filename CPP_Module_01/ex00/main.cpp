#include "Zombie.hpp"


Zombie	*newZombie(std::string name) {
	Zombie *z = new Zombie(name);

	return z;
}

void	randomChump(std::string name) {
	Zombie z(name);

	z.announce();
}

int main(void) {
	Zombie z1("z1");
	z1.announce();

	randomChump("z2");

	Zombie *z3 = newZombie("z3");
	z3->announce();
	delete z3;

	return 0;
}