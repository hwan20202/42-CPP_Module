#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <iostream>
#include <exception>

#define NC "\e[0m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"

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

Form* makeShrubberyCreationForm(std::string target) {
	Form* f;

	try {
		f = new ShrubberyCreationForm(target);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		return 0;
	};
	return f;
}

Form* makeRobotomyRequestForm(std::string target) {
	Form* f;

	try {
		f = new RobotomyRequestForm(target);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		return 0;
	};
	return f;
}

Form* makePresidentialPardonForm(std::string target) {
	Form* f;

	try {
		f = new PresidentialPardonForm(target);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		return 0;
	};
	return f;
}

void	testShrubberyCreationForm() {
	Bureaucrat	*b1;
	Bureaucrat	*b2;
	Form		*f1;


	b1 = makeBureaucrat("b1", 50);
	b2 = makeBureaucrat("b2", 150);
	f1 = makeShrubberyCreationForm("home");

	std::cout << *f1 << std::endl;
	
	try {
		f1->execute(*b1);
	} catch (std::exception& e) {
		std::cout << "<" << b1->getName() << "> cannot execute <"
					<< f1->getName() << "> because <" << e.what() << ">" << std::endl;
	}

	f1->beSigned(*b1);
	std::cout << *f1 << std::endl;
	
	try {
		f1->execute(*b1);
	} catch (std::exception& e) {
		std::cout << "<" << b1->getName() << "> cannot execute <"
					<< f1->getName() << "> because <" << e.what() << ">" << std::endl;
	}

	try {
		f1->execute(*b2);
	} catch (std::exception& e) {
		std::cout << "<" << b2->getName() << "> cannot execute <"
					<< f1->getName() << "> because <" << e.what() << ">" << std::endl;
	}

	delete b1;
	delete b2;
	delete f1;
}

void	testRobotomyRequestForm() {
	Bureaucrat	*b1;
	Bureaucrat	*b2;
	Form		*f1;


	b1 = makeBureaucrat("b1", 45);
	b2 = makeBureaucrat("b2", 150);
	f1 = makeRobotomyRequestForm("Atom");

	std::cout << *f1 << std::endl;
	
	try {
		f1->execute(*b1);
	} catch (std::exception& e) {
		std::cout << "<" << b1->getName() << "> cannot execute <"
					<< f1->getName() << "> because <" << e.what() << ">" << std::endl;
	}

	f1->beSigned(*b1);
	std::cout << *f1 << std::endl;
	
	try {
		f1->execute(*b1);
	} catch (std::exception& e) {
		std::cout << "<" << b1->getName() << "> cannot execute <"
					<< f1->getName() << "> because <" << e.what() << ">" << std::endl;
	}

	try {
		f1->execute(*b2);
	} catch (std::exception& e) {
		std::cout << "<" << b2->getName() << "> cannot execute <"
					<< f1->getName() << "> because <" << e.what() << ">" << std::endl;
	}

	delete b1;
	delete b2;
	delete f1;
}

void	testPresidentialPardonForm() {
	Bureaucrat	*b1;
	Bureaucrat	*b2;
	Form		*f1;


	b1 = makeBureaucrat("b1", 5);
	b2 = makeBureaucrat("b2", 150);
	f1 = makePresidentialPardonForm("Jeokim");

	std::cout << *f1 << std::endl;
	
	try {
		f1->execute(*b1);
	} catch (std::exception& e) {
		std::cout << "<" << b1->getName() << "> cannot execute <"
					<< f1->getName() << "> because <" << e.what() << ">" << std::endl;
	}

	f1->beSigned(*b1);
	std::cout << *f1 << std::endl;
	
	try {
		f1->execute(*b1);
	} catch (std::exception& e) {
		std::cout << "<" << b1->getName() << "> cannot execute <"
					<< f1->getName() << "> because <" << e.what() << ">" << std::endl;
	}

	try {
		f1->execute(*b2);
	} catch (std::exception& e) {
		std::cout << "<" << b2->getName() << "> cannot execute <"
					<< f1->getName() << "> because <" << e.what() << ">" << std::endl;
	}

	delete b1;
	delete b2;
	delete f1;
}


int main() {
	testShrubberyCreationForm();
	std::cout << GRN;
	testRobotomyRequestForm();
	std::cout << CYN;
	testPresidentialPardonForm();
	std::cout << NC;
	return 0;
}
