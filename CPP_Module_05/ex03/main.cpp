#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

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

void	testShrubberyCreationForm(Form* f) {
	Bureaucrat	*b1;
	Bureaucrat	*b2;

	b1 = makeBureaucrat("b1", 50);
	b2 = makeBureaucrat("b2", 150);

	std::cout << *f << std::endl;
	
	try {
		f->execute(*b1);
	} catch (std::exception& e) {
		std::cout << "<" << b1->getName() << "> cannot execute <"
					<< f->getName() << "> because <" << e.what() << ">" << std::endl;
	}

	f->beSigned(*b1);
	std::cout << *f << std::endl;
	
	try {
		f->execute(*b1);
	} catch (std::exception& e) {
		std::cout << "<" << b1->getName() << "> cannot execute <"
					<< f->getName() << "> because <" << e.what() << ">" << std::endl;
	}

	try {
		f->execute(*b2);
	} catch (std::exception& e) {
		std::cout << "<" << b2->getName() << "> cannot execute <"
					<< f->getName() << "> because <" << e.what() << ">" << std::endl;
	}

	delete b1;
	delete b2;
}

void	testRobotomyRequestForm(Form* f) {
	Bureaucrat	*b1;
	Bureaucrat	*b2;

	b1 = makeBureaucrat("b1", 45);
	b2 = makeBureaucrat("b2", 150);

	std::cout << *f << std::endl;
	
	try {
		f->execute(*b1);
	} catch (std::exception& e) {
		std::cout << "<" << b1->getName() << "> cannot execute <"
					<< f->getName() << "> because <" << e.what() << ">" << std::endl;
	}

	f->beSigned(*b1);
	std::cout << *f << std::endl;
	
	try {
		f->execute(*b1);
	} catch (std::exception& e) {
		std::cout << "<" << b1->getName() << "> cannot execute <"
					<< f->getName() << "> because <" << e.what() << ">" << std::endl;
	}

	try {
		f->execute(*b2);
	} catch (std::exception& e) {
		std::cout << "<" << b2->getName() << "> cannot execute <"
					<< f->getName() << "> because <" << e.what() << ">" << std::endl;
	}

	delete b1;
	delete b2;
}

void	testPresidentialPardonForm(Form* f) {
	Bureaucrat	*b1;
	Bureaucrat	*b2;

	b1 = makeBureaucrat("b1", 5);
	b2 = makeBureaucrat("b2", 150);

	std::cout << *f << std::endl;
	
	try {
		f->execute(*b1);
	} catch (std::exception& e) {
		std::cout << "<" << b1->getName() << "> cannot execute <"
					<< f->getName() << "> because <" << e.what() << ">" << std::endl;
	}

	f->beSigned(*b1);
	std::cout << *f << std::endl;
	
	try {
		f->execute(*b1);
	} catch (std::exception& e) {
		std::cout << "<" << b1->getName() << "> cannot execute <"
					<< f->getName() << "> because <" << e.what() << ">" << std::endl;
	}

	try {
		f->execute(*b2);
	} catch (std::exception& e) {
		std::cout << "<" << b2->getName() << "> cannot execute <"
					<< f->getName() << "> because <" << e.what() << ">" << std::endl;
	}

	delete b1;
	delete b2;
}


void test(void) {
	Intern	someRandomIntern;
	Form*	scf;
	Form*	rrf;
	Form*	ppf;

	scf = someRandomIntern.makeForm("shrubbery creation", "home");
	testShrubberyCreationForm(scf);
	std::cout << GRN;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	testRobotomyRequestForm(rrf);
	std::cout << CYN;
	ppf = someRandomIntern.makeForm("presidential pardon", "jeokim");
	testPresidentialPardonForm(ppf);
	std::cout << NC;

	delete scf;
	delete rrf;
	delete ppf;
}

int	main() {
	test();

	return 0;
}