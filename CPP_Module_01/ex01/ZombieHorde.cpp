#include "Zombie.hpp"

Zombie	*Zombie::zombieHorde(int N, std::string name) {
	Zombie	*z;

	if (N <= 0)
		return 0;
	z = new Zombie[N];
	for (int i = 0; i < N; i++)
		z[i].mName = name;
	return z;
}
