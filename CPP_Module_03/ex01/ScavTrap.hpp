#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

#define SCAV_CLASS_NAME   "ScavTrap"
#define SCAV_CLASS_HP     100
#define SCAV_CLASS_EP     50
#define SCAV_CLASS_AD     20
#define GRN "\e[0;32m"
#define NC "\e[0m"

class ScavTrap : public ClapTrap {
public:
    void guardGate(void) const;

    ScavTrap(void);
    ScavTrap(ScavTrap const & obj);
    ScavTrap& operator=(ScavTrap const & obj);
    virtual ~ScavTrap();

    ScavTrap(std::string const name);
};

#endif