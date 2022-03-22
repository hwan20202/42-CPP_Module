#include "Span.hpp"

const char *Span::OutOfSize::what() const throw() {
	return "OutOfSize";
}