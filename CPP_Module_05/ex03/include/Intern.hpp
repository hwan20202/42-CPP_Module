#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>

#define FACTORY_SIZE	3
#define S_TYPE			"shrubbery creation"
#define R_TYPE			"robotomy request"
#define P_TYPE			"presidential pardon"

class Form;

class Intern {
private:
	std::string	formName[FACTORY_SIZE];
	Form*		formRefer[FACTORY_SIZE];

	Intern(Intern const &);
	Intern& operator=(Intern const &);
	
public:
	Intern(void);
	~Intern();

	Form*	makeForm(std::string const &, std::string const &) const;

	class NoneExistForm
	:	public std::exception {
	public:
		virtual const char * what() const throw();
	};
};

#endif