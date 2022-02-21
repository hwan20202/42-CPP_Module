#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>
#include "Form.hpp"

Bureaucrat* makeBureaucrat(std::string _name, int _grade) {
	Bureaucrat* b;

	try {
		b = new Bureaucrat(_name, _grade);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		return 0;
	};
	return b;
}

Form* makeForm(std::string _name, int _gradeToSign, int _gradeToExecute) {
	Form* f;

	try {
		f = new Form(_name, _gradeToSign, _gradeToExecute);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		return 0;
	};
	return f;
}

int main() {
	Bureaucrat	*b1;
	Bureaucrat	*b2;
	Form		*f1;
	Form		*f2;
	Form		*f3;


	b1 = makeBureaucrat("b1", 50);
	b2 = makeBureaucrat("b2", 100);
	f1 = makeForm("f1", 75, 75);
	f2 = makeForm("f2", -1, 75);
	f3 = makeForm("f3", 75, 160);

	std::cout << *f1 << std::endl;

	b2->signForm(*f1);
	b1->signForm(*f1);

	std::cout << *f1 << std::endl;

	delete b1;
	delete b2;
	if (f1)
		delete f1;
	if (f2)
		delete f2;
	if (f3)
		delete f3;
	return 0;
}	