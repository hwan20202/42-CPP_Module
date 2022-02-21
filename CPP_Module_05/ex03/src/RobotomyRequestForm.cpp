#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>

/************************************************/
/*						OCCF					*/
/************************************************/


RobotomyRequestForm::RobotomyRequestForm(void)
	:	Form("RobotomyRequestForm", 72, 45), mTarget("") {
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & rhs)
	:	Form("RobotomyRequestForm", 72, 45), mTarget("") {
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	*this = rhs;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {
	std::cout << "RobotomyRequestForm assignation operator called" << std::endl;
	if (this != &rhs) {
		mTarget = rhs.mTarget;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

/************************************************/
/*						others					*/
/************************************************/

RobotomyRequestForm::RobotomyRequestForm(std::string const & target)
	:	Form("RobotomyRequestForm", 72, 45), mTarget(target) {
	std::cout << "RobotomyRequestForm standard constructor called" << std::endl;
}

void	RobotomyRequestForm::action(void) const {
	std::cout << "drilling noise... ziiiiiiiing..." << std::endl;
	if (rand() % 2) {
		std::cout << "<" << mTarget << ">  has been robotomized successfully" << std::endl;
	} else {
		std::cout << "<" << mTarget << ">  Robotization failed" << std::endl;
	}
}

Form*	RobotomyRequestForm::create(std::string const & target) const {
	return new RobotomyRequestForm(target);
}