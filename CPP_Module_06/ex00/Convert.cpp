#include "Convert.hpp"
#include <string>
#include <limits>

#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"

/************************************/
/*			private	method			*/
/************************************/

/************************************/
/*			isSomthing method		*/
/************************************/

bool	Convert::isNan() const {
	if (mRawValue != 0 && !static_cast<int>(mRawValue))
		return true;
	return false;
}

bool	Convert::isInf() const {
	if ((mRawValue != INT_MIN && static_cast<int>(mRawValue) == INT_MIN && !isDouble()) ||
		(mRawValue != INT_MAX && static_cast<int>(mRawValue) == INT_MAX && !isDouble()))
		return true;
	return false;
}

bool	Convert::isInt() const {
	if ((INT_MIN <= mRawValue && mRawValue <= INT_MAX)
		&& !isNan() && !isInf())
		return true;
	return false;
}

bool	Convert::isFloat() const {
	if (-__FLT_MAX__ <= mRawValue && mRawValue <= __FLT_MAX__)
		return true;
	if(isNan() || isInf())
		return true;
	return false;
}

bool	Convert::isChar() const {
	int	num = toInt();
	
	if (32 <= num && num <= 126)
		return true;
	return false;
}

bool	Convert::isDouble() const {
	if (-__DBL_MAX__ <= mRawValue && mRawValue <= __DBL_MAX__)
		return true;
	return false;
}

/************************************/
/*			convert	method			*/
/************************************/

int		Convert::toInt() const {
	if (error)
		throw Impossible();
	if (!isInt())
		throw Impossible();
	return static_cast<int>(mRawValue);
}

char	Convert::toChar() const {
	if (error)
		Impossible();
	if (!isChar())
		throw NonDisplayable();
	return static_cast<char>(toInt());
}

float	Convert::toFloat() const {
	if (error)
		throw Impossible();
	if (!isFloat())
		throw Impossible();
	return static_cast<float>(mRawValue);
}

double	Convert::toDouble() const {
	if (error)
		throw Impossible();
	return mRawValue;
}

/************************************/
/*			public	method			*/
/************************************/

/************************************/
/*			print	method			*/
/************************************/

void	Convert::printChar(std::ostream& os) const {
		try {
			char	c = toChar();

			os << "\'" << c << "\'";
		} catch(std::exception& e) {
			os << e.what();
		}
}

void	Convert::printInt(std::ostream& os) const {
	try {
		os << toInt();
	} catch(std::exception& e) {
		os << e.what();
	}
}

void	Convert::printFloat(std::ostream& os) const {
	try {
		os << toFloat();
		if (isNan()
			|| isInf()
			|| (static_cast<int>(mRawValue * 10.0) % 10))
			std::cout << "f";
		else
			std::cout << ".0f";
	} catch (std::exception& e) {
		os << e.what();
	}
}

void	Convert::printDouble(std::ostream& os) const {
	try {
		os << toDouble();
		if (!isNan()
			&& !isInf()
			&& !(static_cast<int>(mRawValue * 10.0) % 10))
			std::cout << ".0";
	} catch (std::exception& e) {
		os << e.what();
	}
}

/************************************/
/*				others				*/
/************************************/

std::ostream& operator<<(std::ostream& os, Convert const & c) {
	os << GRN << "char : ";
	c.printChar(os);
	os << std::endl;

	os << RED << "int : ";
	c.printInt(os);
	os << std::endl;

	os << CYN << "float : ";
	c.printFloat(os);
	os << std::endl;

	os << NC << "double : ";
	c.printDouble(os);
	return os;
}

Convert::Convert(std::string const & s)
	:	mRawValue(0), error(false) {
		// std::cout << "Convert constrcutor called" << std::endl;
	try {
		mRawValue = std::stod(s);
	} catch (std::exception& e) {
		error = true;
	}
}

Convert::~Convert() {
	// std::cout << "Convert destructor called" << std::endl;
}
