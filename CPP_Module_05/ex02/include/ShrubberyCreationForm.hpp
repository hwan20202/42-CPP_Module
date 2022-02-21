#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
private:
	std::string	const	mTarget;

	ShrubberyCreationForm(void);
public:
	ShrubberyCreationForm(std::string const &);
	ShrubberyCreationForm(ShrubberyCreationForm const &);
	ShrubberyCreationForm& operator=(ShrubberyCreationForm const &);
	virtual ~ShrubberyCreationForm();

	virtual void		action(void) const;

	class FileOpenFailed
	:	public std::exception {
	public:
		virtual const char*	what() const throw();
	};
	
};
