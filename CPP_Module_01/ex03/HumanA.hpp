#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
private:
	std::string	mName;
	Weapon		&mWeapon;

public:
    void attack(void);

    HumanA(std::string name, Weapon &weapon);
    ~HumanA(void);
};

#endif