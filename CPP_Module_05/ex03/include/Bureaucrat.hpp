#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <exception>

class	Form;

class Bureaucrat {
private:
	std::string const name;
	int	grade;

public:
	static int const	topGrade = 1;
	static int const	bottomGrade = 150;
	
	std::string getName(void) const;
	int			getGrade(void) const;
	void		increment(void);
	void		decrement(void);

	bool		signForm(Form &) const;
	bool		executeForm(Form const &) const;

	Bureaucrat(void);
	Bureaucrat(Bureaucrat const & rhs);
	Bureaucrat& operator=(Bureaucrat const & rhs);
	~Bureaucrat();

	Bureaucrat(std::string _name, int _grade);

	class GradeTooHighException
		:	public std::exception {
		public:
			virtual const char*	what() const throw();
	};

	class GradeTooLowException
		:	public std::exception {
		public:
			virtual const char*	what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, Bureaucrat& rhs);

#endif