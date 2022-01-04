#include "Zombie.hpp"

int	main(void) {
	int size;
	Zombie *z = 0;

	size = 0;
	z = Zombie::zombieHorde(size, "zombie");
	if (z) {
		std::cout << z << std::endl;
		std::cout << z[i] << std::endl;
		for(int i = 0; i < size; i++) {
			if (z)
				z[i].announce();
		}
		if (z)
		    z->announce();
		delete[] z;
	} else
		std::cout << "z is nullpointer" << std::endl;
	return 0;
}