#include "Span.hpp"

const char *Span::SpanDoesNotExist::what() const throw() {
	return "SpanDoesNotExist";
}