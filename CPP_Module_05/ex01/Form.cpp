#include "Form.hpp"
#include "Bureaucrat.hpp"

#include <iostream>

Form::Form(std::string name, int gradeToSign, int gradeToExecute)
	:	mIsSigned(false), mGradeToSign(0), mGradeToExecute(0) {
	std::cout << "Form default constructor called" << std::endl;
}

Form::~Form() {
	std::cout << "Form destructor called" << std::endl;
}


std::ostream& operator<<(std::ostream& os, Form const & rhs) {
	return os << "Name : " << rhs.getName() << std::endl
				<< "IsSigned : " << rhs.getIsSigned() << std::endl
				<< "Grade to sign : " << rhs.getGradeToSign() << std::endl
				<< "Grade to execute : " << rhs.getGradeToExecute() << std::endl;
}

std::string	Form::getName(void) const {
	return mName;
}

bool		Form::getIsSigned(void) const {
	return mIsSigned;
}

int			Form::getGradeToSign(void) const {
	return mGradeToSign;
}

int			Form::getGradeToExecute(void) const {
	return mGradeToExecute;
}

void		Form::beSigned(Bureaucrat& bur) {
	if (mGradeToSign >= bur.getGrade())
		mIsSigned = true;
	else
		throw Bureaucrat::GradeTooLowException();
}

