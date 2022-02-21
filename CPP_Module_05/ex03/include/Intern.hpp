#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>

class Form;
class Manual;

class Intern {
private:
	static Manual*	formManual;
	
public:
	Intern(void);
	Intern(Intern const &);
	Intern& operator=(Intern const &);
	~Intern();

	Form*	makeForm(std::string const &, std::string const &) const;
};

#endif