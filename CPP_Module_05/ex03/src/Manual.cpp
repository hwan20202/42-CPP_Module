#include "Manual.hpp"
#include <iostream>

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Manual::Manual() {
	formName[0] = S_TYPE;
	formName[1] = R_TYPE;
	formName[2] = P_TYPE;
	formRefer[0] = new ShrubberyCreationForm();
	formRefer[1] = new RobotomyRequestForm();
	formRefer[2] = new PresidentialPardonForm();
	std::cout << "Manual default constructor called" << std::endl;
}

Manual::~Manual() {
	std::cout << "Manual destructor called" << std::endl;
	delete formRefer[0];
	delete formRefer[1];
	delete formRefer[2];

}

Form*	Manual::getForm(std::string const & name, std::string const & target) const {
	for (int idx = 0; idx < FACTORY_SIZE; idx++) {
		if (formName[idx] == name) {
			return (formRefer[idx])->create(target);
		}
	}
	throw NoneExistForm();
}

