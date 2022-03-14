#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <iostream>

/************************************************/
/*						OCCF					*/
/************************************************/

Intern::Intern() {
	formName[0] = S_TYPE;
	formName[1] = R_TYPE;
	formName[2] = P_TYPE;
	formRefer[0] = new ShrubberyCreationForm();
	formRefer[1] = new RobotomyRequestForm();
	formRefer[2] = new PresidentialPardonForm();
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::~Intern() {
	std::cout << "Intern destructor called" << std::endl;
	delete formRefer[0];
	delete formRefer[1];
	delete formRefer[2];
}

/************************************************/
/*						others					*/
/************************************************/

Form*	Intern::makeForm(std::string const & name, std::string const & target) const {
	for (int idx = 0; idx < FACTORY_SIZE; idx++) {
		if (formName[idx] == name) {
			std::cout << "Intern would create a " << formRefer[idx]->getName()
						<< " targeted on <" << target << ">" << std::endl;
			return (formRefer[idx])->create(target);
		}
	}
	throw NoneExistForm();
}

