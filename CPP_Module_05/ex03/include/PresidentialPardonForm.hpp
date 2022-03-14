#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <string>
#include "Form.hpp"

class PresidentialPardonForm: public Form {
private:
	std::string	mTarget;

protected:
	virtual void	action(void) const;

public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string const &);
	PresidentialPardonForm(PresidentialPardonForm const &);
	PresidentialPardonForm& operator=(PresidentialPardonForm const &);
	virtual ~PresidentialPardonForm();

	virtual Form*	create(std::string const &) const;
};

#endif
