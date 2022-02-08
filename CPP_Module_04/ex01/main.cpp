#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

void	test(void) {
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	Animal	*animals[Brain::getMaxIdea()];

	for (int idx = 0; idx < (int)Brain::getMaxIdea(); idx++) {
		if (idx < ((int)Brain::getMaxIdea() / 2))
			animals[idx] = new Cat();
		else
			animals[idx] = new Dog();
	}

	Dog	*d = new Dog();
	Cat	*c = new Cat();
	Brain	*brain = new Brain();

	brain->setIdea(0, "apple");
	brain->setIdea(1, "watermelon");
	brain->setIdea(2, "orange");
	brain->setIdea(3, "strawberry");
	*d->getBrain() = *brain;
	*c->getBrain() = *brain;
	delete brain;
	for (int idx = 0; idx < (int)Brain::getMaxIdea(); idx++) {
		if (idx < ((int)Brain::getMaxIdea() / 2))
			*(Cat*)animals[idx] = *c;
		else
			*(Dog*)animals[idx] = *d;
	}
	delete d;
	delete c;

	for (int idx = 0; idx < (int)Brain::getMaxIdea(); idx++) {
		std::cout << "[" << idx << "] " << ((Cat*)animals[30])->getBrain()->getIdea(idx) << std::endl;
	}
	for (int idx = 0; idx < (int)Brain::getMaxIdea(); idx++) {
		std::cout << "[" << idx << "] " << ((Dog*)animals[70])->getBrain()->getIdea(idx) << std::endl;
	}
	for (int idx = 0; idx < (int)Brain::getMaxIdea(); idx++) {
		delete animals[idx];
	}

}

int	main(void) {
	test();
	return 0;
}
