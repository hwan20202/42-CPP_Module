#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
    std::string _name;
    
    Zombie(void);

public:
    static Zombie *newZombie(std::string name);
    static void    randomChump(std::string name);
    void    announce(void);
    static Zombie* zombieHorde( int N, std::string name );

    Zombie(std::string name);
    ~Zombie(void);
};

#endif