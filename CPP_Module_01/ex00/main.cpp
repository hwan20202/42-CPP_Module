#include "Zombie.hpp"

int main(void) {
	Zombie z1("z1");
	z1.announce();

	Zombie::randomChump("z2");

	Zombie *z3 = Zombie::newZombie("z3");
	z3->announce();
	delete z3;

	return 0;
}