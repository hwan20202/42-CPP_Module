#include "Zombie.hpp"

Zombie *Zombie::newZombie(std::string name)
{
    Zombie *z = new Zombie;
    z->_name = name;
    return (z);
}
void    Zombie::randomChump(std::string name)
{
    Zombie z(name);
    z.announce();
}
void    Zombie::announce(void)
{
    std::cout << "<" << _name << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::Zombie(void)
{
    std::cout << "Zombie created" << std::endl;
}
Zombie::Zombie(std::string name)
{
    _name = name;
}
Zombie::~Zombie(void)
{
    std::cout << "<" << _name << "> " << "destroyed" << std::endl;
}