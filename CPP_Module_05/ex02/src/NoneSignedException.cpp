#include "Form.hpp"

const char* Form::NoneSignedException::what() const throw() {
	return "None Signed Exception";
}
