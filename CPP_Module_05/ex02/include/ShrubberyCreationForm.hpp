#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
private:
	std::string	const	mTarget;

	ShrubberyCreationForm(void);

protected:
	virtual void		action(void) const;

public:
	ShrubberyCreationForm(std::string const &);
	ShrubberyCreationForm(ShrubberyCreationForm const &);
	ShrubberyCreationForm& operator=(ShrubberyCreationForm const &);
	virtual ~ShrubberyCreationForm();

	class FileOpenFailed
	:	public std::exception {
	public:
		virtual const char*	what() const throw();
	};
};
