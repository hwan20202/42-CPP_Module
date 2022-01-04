#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
    std::string mName;

public:
    void            announce(void) const;

    static Zombie   *newZombie(std::string name);
    static void     randomChump(std::string name);
    static Zombie   *zombieHorde(int N, std::string name);

    Zombie(void);
    Zombie(std::string name);
    ~Zombie(void);
};

#endif