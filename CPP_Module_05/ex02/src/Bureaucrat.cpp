#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

/********************************************/
/*					OCCF					*/
/********************************************/

Bureaucrat::Bureaucrat(Bureaucrat const & rhs) {
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = rhs;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const & rhs) {
	if (this != &rhs) {
		*const_cast<std::string*>(&name) = rhs.name;
		grade = rhs.grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor called" << std::endl;
}

/********************************************/
/*					other					*/
/********************************************/

Bureaucrat::Bureaucrat(std::string _name, int _grade): name(_name), grade(_grade) {
	std::cout << "Bureaucrat constructor taking parameters called" << std::endl;
	if (grade < topGrade)
		throw Bureaucrat::GradeTooHighException();
	if (grade > bottomGrade)
		throw Bureaucrat::GradeTooLowException();
}


std::ostream& operator<<(std::ostream& os, Bureaucrat& rhs) {
	return os << "< " << rhs.getName() << " > bureaucrat have grade < " << rhs.getGrade() << " >"; 
}

/********************************************/
/*				public method				*/
/********************************************/

std::string Bureaucrat::getName(void) const {
	return name;
}

int			Bureaucrat::getGrade(void) const {
	return grade;
}

void		Bureaucrat::increment(void) {
	if (grade - 1 < topGrade)
		throw Bureaucrat::GradeTooHighException();
	--grade;
}

void		Bureaucrat::decrement(void) {
	if (grade + 1 > bottomGrade)
		throw Bureaucrat::GradeTooLowException();
	++grade;
}

bool		Bureaucrat::signForm(Form& form) const {
	try {
		form.beSigned(*this);
		std::cout << "<" << name << "> signs <" << form.getName() << ">" << std::endl;
		return true;
	} catch(std::exception& e) {
		std::cout << "<" << name << "> cannot sign <" << form.getName() << "> because <" << e.what() << ">" << std::endl;
		return false;
	}
}

bool		Bureaucrat::executeForm(Form const & form) const {
	try {
		form.execute(*this);
		std::cout << "<" << name << "> executes <" << form.getName() << ">" << std::endl;
		return true;
	} catch (std::exception& e) {
		std::cout << "<" << name << "> cannot execute <" << form.getName() << "> because <" << e.what() << ">" << std::endl;
		return false;
	}
}
