#include "Zombie.hpp"

int main(void)
{
    int size;
    Zombie *z;

    size = 5;
    z = Zombie::zombieHorde(5, "zombie");
    for(int i = 0; i < size; i++)
        z[i].announce();

    delete[] z;
    return (0);
}