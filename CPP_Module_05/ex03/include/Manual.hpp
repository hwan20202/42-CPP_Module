#ifndef MANUAL_HPP
#define MANUAL_HPP

#include <string>

#define FACTORY_SIZE	3
#define S_TYPE			"shrubbery creation"
#define R_TYPE			"robotomy request"
#define P_TYPE			"presidential pardon"

class Form;

class Manual {
private:
	std::string	formName[FACTORY_SIZE];
	Form*		formRefer[FACTORY_SIZE];
public:
	Manual();
	~Manual();

	Form*	getForm(std::string const &, std::string const &) const;

	class NoneExistForm
	:	public std::exception {
		public:
		virtual const char * what() const throw();
	};
};

#endif