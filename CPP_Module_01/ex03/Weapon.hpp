#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
private:
    std::string mType;
public:
    std::string const & getType(void) const;
    void                setType(std::string const type);

    Weapon(void);
    Weapon(std::string const type);
    ~Weapon(void);
};

#endif