#include "Bureaucrat.hpp"

const char*	Bureaucrat::GradeTooHighException::what() const throw() {
	return "Bureaucrat Grade Too High";
}

