#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>

class Convert {
private:
	std::string value;

	bool	isNumeric(std::string const &) const;
	bool	isPrintable(int) const;

	Convert(void);
public:
	class NonDisplayable
		:	public std::exception {
			virtual const char* what() const throw();
		};

	class Impossible
		:	public std::exception {
			virtual const char* what() const throw();
		};

	char	toChar(void) const;
	int		toInt(void) const;
	double	toDouble(void) const;

	void	printChar() const;
	void	printInt() const;
	void	printFloat() const;
	void	printDouble() const;

	Convert(std::string const &);
	~Convert();

};

std::ostream& operator<<(std::ostream&, Convert const &);

#endif