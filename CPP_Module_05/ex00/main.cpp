#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

Bureaucrat* makeBureaucrat(std::string _name, int _grade) {
	Bureaucrat* b;

	try {
		b = new Bureaucrat(_name, _grade);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	};
	return b;
}

void increaseBureaucrat(Bureaucrat& b) {
	try {
		b.increment();
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

void decreaseBureaucrat(Bureaucrat& b) {
	try {
		b.decrement();
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

void test(void) {
	Bureaucrat *b1;
	Bureaucrat *b2;

	b1 = makeBureaucrat("b1", 150);
	b2 = makeBureaucrat("b2", 1);

	std::cout << *b1 << std::endl
				<< *b2 << std::endl;

	increaseBureaucrat(*b1);
	decreaseBureaucrat(*b2);

	std::cout << *b1 << std::endl
			<< *b2 << std::endl;

	decreaseBureaucrat(*b1);
	decreaseBureaucrat(*b1);
	increaseBureaucrat(*b2);
	increaseBureaucrat(*b2);

	std::cout << *b1 << std::endl
			<< *b2 << std::endl;

	delete b1;
	delete b2;

	b1 = makeBureaucrat("b1", 151);
	b2 = makeBureaucrat("b2", 0);
}

int	main(void) {
	test();

	return 0;
}