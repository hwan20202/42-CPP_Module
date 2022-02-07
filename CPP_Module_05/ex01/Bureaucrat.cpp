#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(void): name(""), grade(100) {
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

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
