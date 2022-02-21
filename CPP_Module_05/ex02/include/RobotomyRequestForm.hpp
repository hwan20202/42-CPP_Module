#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <string>

class RobotomyRequestForm: public Form {
private:
	std::string	mTarget;

	RobotomyRequestForm(void);
public:
	RobotomyRequestForm(std::string const &);
	RobotomyRequestForm(RobotomyRequestForm const &);
	RobotomyRequestForm& operator=(RobotomyRequestForm const &);
	virtual ~RobotomyRequestForm();

	virtual void	action(void) const;
};

#endif