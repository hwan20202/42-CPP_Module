#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main(void) {
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	Animal	*animals[100];

	for (int idx = 0; idx < 100; idx++) {
		if (idx < 50)
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
	for (int idx = 0; idx < 100; idx++) {
		if (idx < 50)
			*(Cat*)animals[idx] = *c;
		else
			*(Dog*)animals[idx] = *d;
	}
	delete d;
	delete c;

	for (int idx = 0; idx < 100; idx++) {
		std::cout << "[" << idx << "] " << ((Cat*)animals[30])->getBrain()->getIdea(idx) << std::endl;
	}
	for (int idx = 0; idx < 100; idx++) {
		std::cout << "[" << idx << "] " << ((Dog*)animals[70])->getBrain()->getIdea(idx) << std::endl;
	}

	for (int idx = 0; idx < 100; idx++) {
		delete animals[idx];
	}

	return 0;
}
