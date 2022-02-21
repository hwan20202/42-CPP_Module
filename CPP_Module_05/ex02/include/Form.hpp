#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include "Bureaucrat.hpp"

class Form {
private:
	std::string const	mName;
	bool				mIsSigned;
	int const			mGradeToSign;
	int const			mGradeToExecute;
	
	Form(void);
	Form(Form const &);
	Form&	operator=(Form const &);

protected:
	void	checkGradeRange(int const &) const;

public:
	Form(std::string, int, int);
	virtual ~Form();

	std::string		getName(void) const;
	bool			getIsSigned(void) const;
	int				getGradeToSign(void) const;
	int				getGradeToExecute(void) const;

	void			beSigned(Bureaucrat const &);

	void			checkExecutable(Bureaucrat const &) const;
	void			execute(Bureaucrat const &) const;
	virtual void	action(void) const = 0;

	class NoneSignedException
	:	public std::exception {
		public:
			virtual const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, Form const & rhs);

#endif