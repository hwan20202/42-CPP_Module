#include "Character.hpp"
#include "AMateria.hpp"

#include <iostream>

#define GRN	"\e[0;32m"
#define RED	"\033[31m"
#define NC	"\e[0m"

std::string const &	Character::getName() const {
	return mName;
}

void				Character::equip(AMateria* m) {
	if (!m) {
		std::cout << RED << "You try to equip something that doesn't exist" << NC << std::endl;
		return ;
	}
	for (int idx = 0; idx <= maxInventorySize; idx++) {
		if (idx == maxInventorySize) {
			std::cout << RED << "Inventory is full" << NC << std::endl;
			return ;
		}
		if (!inventory[idx]) {
			inventory[idx] = m;
			m->equip();
			std::cout << GRN << "<< " << m->getType() << " >> equiped " << idx << "'s inventory" << NC << std::endl;
			return ;
		}
	}
}
void				Character::unequip(int idx) {
	if (idx < 0 || maxInventorySize <= idx)
		return ;
	if (inventory[idx]) {
		std::cout << GRN << idx << "'s << " << inventory[idx]->getType() << " >> unequiped" << NC << std::endl;
		inventory[idx]->unequip();
		inventory[idx] = NULL;
	}
}

void				Character::use(int idx, ICharacter& target) {
	if (idx < 0 || maxInventorySize <= idx)
		return ;
	if (inventory[idx]) {
		std::cout << GRN;
		inventory[idx]->use(target);
		std::cout << NC;
	}
}

Character::Character(std::string const & name): mName(name) {
	std::cout << "Character constructor taking name parameter called" << std::endl;
}

Character::Character(): mName(NAME) {
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(Character const & obj) {
	std::cout << "Character copy constructor called" << std::endl;
	*this = obj;
}

Character&	Character::operator=(Character const & obj) {
	std::cout << "Character assignation operator called" << std::endl;
	mName = obj.mName;
	for (int idx = 0; idx < maxInventorySize; idx++) {
		if (inventory[idx]) {
			delete inventory[idx];
			inventory[idx] = NULL;
		}
		if (obj.inventory[idx]) {
			inventory[idx] = obj.inventory[idx]->clone();
			inventory[idx]->equip();
		}
	}
	return *this;
}

Character::~Character() {
	std::cout << "Character destructor called" << std::endl;
	for (int idx = 0; idx < maxInventorySize; idx++) {
		if (inventory[idx]) {
			delete inventory[idx];
			inventory[idx] = NULL;
		}
	}
}
