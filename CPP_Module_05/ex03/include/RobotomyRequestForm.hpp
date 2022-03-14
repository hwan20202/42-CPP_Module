#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <string>

class RobotomyRequestForm: public Form {
private:
	std::string	mTarget;

protected:
	virtual void	action(void) const;

public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string const &);
	RobotomyRequestForm(RobotomyRequestForm const &);
	RobotomyRequestForm& operator=(RobotomyRequestForm const &);
	virtual ~RobotomyRequestForm();

	virtual Form*	create(std::string const &) const;
};

#endif