#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

#define SCAV_INIT_NAME   "ScavTrap"
#define SCAV_INIT_HP     100
#define SCAV_INIT_EP     50
#define SCAV_INIT_AD     20

class ScavTrap : public ClapTrap
{
public:
    void GuardGate(void) const;

    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(ScavTrap& obj);
    virtual ~ScavTrap();

    ScavTrap& operator=(ScavTrap& obj);
};


#endif