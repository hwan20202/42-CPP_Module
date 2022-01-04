#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
private:
	std::string	mName;
	Weapon		*mWeapon;

public:
    void attack();
    void setWeapon(Weapon &weapon);

    HumanB(std::string name);
    ~HumanB();
};

#endif