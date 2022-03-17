#ifndef DOESNOTFOUND_HPP
#define DOESNOTFOUND_HPP

#include <exception>

class	DoesNotFound: public std::exception {
public:
	const char * what() const throw();
};

#endif