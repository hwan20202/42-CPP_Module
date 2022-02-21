#include "Intern.hpp"
#include "Manual.hpp"

#include <iostream>

Manual*	Intern::formManual = 0;

Intern::Intern(void) {
	if (!formManual) {
		formManual = new Manual();
	}
}

Intern::Intern(Intern const & rhs) {
	(void)rhs;
}

Intern& Intern::operator=(Intern const & rhs) {
	(void)rhs;
	return *this;
}

Intern::~Intern() {

}

Form*	Intern::makeForm(std::string const & type, std::string const & target) const {

	return formManual->getForm(type, target);
}
