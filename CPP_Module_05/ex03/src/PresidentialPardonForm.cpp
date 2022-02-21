#include "PresidentialPardonForm.hpp"
#include <iostream>

/************************************************/
/*						OCCF					*/
/************************************************/

PresidentialPardonForm::PresidentialPardonForm(void)
	:	Form("PresidentialPardonForm", 25, 5), mTarget("") {
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & rhs)
	:	Form("PresidentialPardonForm", 25, 5), mTarget("") {
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	*this = rhs;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {
	std::cout << "PresidentialPardonForm assignation operator called" << std::endl;
	if (this != &rhs) {
		mTarget = rhs.mTarget;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

/************************************************/
/*						others					*/
/************************************************/

PresidentialPardonForm::PresidentialPardonForm(std::string const & target)
	:	Form("PresidentialPardonForm", 25, 5), mTarget(target) {
	std::cout << "PresidentialPardonForm standard constructor called" << std::endl;
}

void	PresidentialPardonForm::action(void) const {
	std::cout << "<" << mTarget << "> has been pardoned by Zafod Beeblebrox" << std::endl;
}

Form*	PresidentialPardonForm::create(std::string const & target) const {
	return new PresidentialPardonForm(target);
}