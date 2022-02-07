#include "Bureaucrat.hpp"

const char*	Bureaucrat::GradeTooLowException::what() const throw() {
	return "Bureaucrat Grade Too Low";
}
