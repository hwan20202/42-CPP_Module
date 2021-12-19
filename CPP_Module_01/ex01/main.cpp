#include "Zombie.hpp"

int main(void)
{
    int size;
    Zombie *z = 0;

    size = 5;
    z = Zombie::zombieHorde(0, "zombie");
    std::cout << z << std::endl;
    for(int i = 0; i < size; i++)
    {
        std::cout << &(z[i]) << std::endl;
        z[i].announce();
    }

    delete[] z;
    return (0);
}