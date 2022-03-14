#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>

class Convert {
private:
	double	mRawValue;
	bool	error;

	//is something
	bool	isNan(void) const;
	bool	isInf(void) const;

	bool	isInt(void) const;
	bool	isFloat(void) const;
	bool	isDouble(void) const;
	bool	isChar(void) const;

	//convert
	char	toChar(void) const;
	int		toInt(void) const;
	float	toFloat(void) const;
	double	toDouble(void) const;

	//OCCF
	Convert(void);
	Convert(Convert const &);
	Convert& operator=(Convert const &);

public:
	class NonDisplayable
		:	public std::exception {
			virtual const char* what() const throw();
		};

	class Impossible
		:	public std::exception {
			virtual const char* what() const throw();
		};

	//print function
	void	printChar(std::ostream&) const;
	void	printInt(std::ostream&) const;
	void	printFloat(std::ostream&) const;
	void	printDouble(std::ostream&) const;

	Convert(std::string const &);
	~Convert();
};

std::ostream& operator<<(std::ostream&, Convert const &);

#endif