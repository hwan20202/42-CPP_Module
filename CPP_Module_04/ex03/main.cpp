#include <iostream>
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define YLLW "\033[33m"
#define NC "\e[0m"


void	test1(void) {
	AMateria *anIce = new Ice();
	AMateria *aCure = new Cure();

	*anIce = *aCure;
	std::cout << anIce->getType() << std::endl;
	delete anIce;
	delete aCure;
}

void	test2(void) {
	IMateriaSource* src = new MateriaSource();
	MateriaSource* src2 = new MateriaSource(*(MateriaSource*)(src));
	AMateria*	srcCollector[10];

	memset(srcCollector, 0, sizeof(void *) * 10);
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	srcCollector[0] = tmp;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	srcCollector[1] = tmp;

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(0);
	me->unequip(6);

	ICharacter* john = new Character();

	tmp = src->createMateria("cure");
	john->equip(tmp);
	srcCollector[2] = tmp;
	tmp = src->createMateria("ice");
	john->equip(tmp);
	srcCollector[3] = tmp;

	john->use(0, *me);
	john->use(1, *me);

	*(Character*)(john) = *(Character*)(me);
	john->use(0, *me);
	john->use(1, *me);

	tmp = src->createMateria("ice");
	john->equip(tmp);
	srcCollector[4] = tmp;
	tmp = src->createMateria("ice");
	john->equip(tmp);
	srcCollector[5] = tmp;
	tmp = src->createMateria("ice");
	john->equip(tmp);
	srcCollector[6] = tmp;
	tmp = src->createMateria("ice");
	john->equip(tmp);
	srcCollector[7] = tmp;

	for (int idx = 0; idx < 10; idx++) {
		if (srcCollector[idx]) {
			if (!srcCollector[idx]->isequiped())
			{
				delete srcCollector[idx];
				srcCollector[idx] = NULL;
			}
		}
	}

	delete john;
	delete src2;
	delete bob;
	delete me;
	delete src;
}

int main(void) {
	test1();
	std::cout << std::endl << std::endl;
	test2();
	while (1);
	return 0;
}