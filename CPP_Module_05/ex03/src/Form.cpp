#include "Form.hpp"
#include "Bureaucrat.hpp"

#include <iostream>

/************************************************/
/*						OCCF					*/
/************************************************/

Form::~Form() {
	std::cout << "Form destructor called" << std::endl;
}

/************************************************/
/*						others					*/
/************************************************/

Form::Form(std::string name, int gradeToSign, int gradeToExecute)
	:	mName(name), mIsSigned(false), mGradeToSign(gradeToSign), mGradeToExecute(gradeToExecute) {
		checkGradeRange(mGradeToSign);
		checkGradeRange(mGradeToExecute);
	std::cout << "Form default constructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& os, Form const & rhs) {
	return os << "Name : " << rhs.getName() << std::endl
				<< "IsSigned : " << rhs.getIsSigned() << std::endl
				<< "Grade to sign : " << rhs.getGradeToSign() << std::endl
				<< "Grade to execute : " << rhs.getGradeToExecute() << std::endl;
}

/************************************************/
/*					public method				*/
/************************************************/

void		Form::beSigned(Bureaucrat const & bur) {
	if (mGradeToSign >= bur.getGrade())
		mIsSigned = true;
	else
		throw Bureaucrat::GradeTooLowException();
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

void		Form::execute(Bureaucrat const & b) const {
	checkExecutable(b);
	action();
}

/************************************************/
/*				protected method				*/
/************************************************/

void	Form::checkGradeRange(int const & grade) const {
	if (grade < Bureaucrat::topGrade)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > Bureaucrat::bottomGrade)
		throw Bureaucrat::GradeTooLowException();	
}

void		Form::checkExecutable(Bureaucrat const & b) const {
	if (!mIsSigned)
		throw NoneSignedException();
	if (mGradeToExecute < b.getGrade())
		throw Bureaucrat::GradeTooLowException();
}
