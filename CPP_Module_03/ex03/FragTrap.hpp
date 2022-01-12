#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#define FRAG_CLASS_NAME	"FragTrap"
#define FRAG_CLASS_HP	100
#define FRAG_CLASS_EP	100
#define FRAG_CLASS_AD	30
#define CYN "\e[0;36m"
#define NC "\e[0m"


class FragTrap : public ClapTrap {
public:
	void highFivesGuys(void);

	FragTrap(void);
	FragTrap(FragTrap const & obj);
	FragTrap &operator=(FragTrap const & obj);
	virtual ~FragTrap();

	FragTrap(std::string name);
};

#endif