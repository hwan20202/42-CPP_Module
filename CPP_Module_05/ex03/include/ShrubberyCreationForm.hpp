#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
private:
	std::string	const	mTarget;

protected:
	virtual void		action(void) const;

public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string const &);
	ShrubberyCreationForm(ShrubberyCreationForm const &);
	ShrubberyCreationForm& operator=(ShrubberyCreationForm const &);
	virtual ~ShrubberyCreationForm();

	virtual Form*	create(std::string const &) const;

	class FileOpenFailed
	:	public std::exception {
	public:
		virtual const char*	what() const throw();
	};
	
};
