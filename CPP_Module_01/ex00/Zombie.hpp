#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
    std::string mName;

public:
    void            announce(void) const;

    Zombie(void);
    Zombie(std::string name);
    ~Zombie(void);
};

#endif