#include "Character.hpp"
#include "AMateria.hpp"

#include <iostream>

std::string const &	Character::getName() const {
	return mName;
}

void				Character::equip(AMateria* m) {
	if (!m) {
		std::cout << "You try to equip something that doesn't exist" << std::endl;
		return ;
	}
	for (int idx = 0; idx <= maxInventorySize; idx++) {
		if (idx == maxInventorySize) {
			std::cout << "Inventory is full" << std::endl;
			return ;
		}
		if (!inventory[idx]) {
			inventory[idx] = m;
			std::cout << "<< " << m->getType() << " >> equiped " << idx << "'s inventory" << std::endl;
			return ;
		}
	}
}
void				Character::unequip(int idx) {
	if (inventory[idx]) {
		inventory[idx] = NULL;
		std::cout << idx << "'s << " << inventory[idx]->getType() << " >> unequiped" << std::endl;
	}
}
void				Character::use(int idx, ICharacter& target) {
	if (inventory[idx]) {
		inventory[idx]->use(target);
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
			inventory[idx] = obj.inventory[idx];
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