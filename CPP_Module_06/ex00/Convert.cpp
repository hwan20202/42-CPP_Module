#include "Convert.hpp"
#include <string>

bool	Convert::isNumeric(std::string const & s) const {
	try {
		std::stoi(s);
		return true;
	} catch (std::exception& e) {
		return false;
	}
}

bool	Convert::isPrintable(int num) const {
	if (num < 32 || 126 < num)
		return false;
	return true;
}


int		Convert::toInt() const {
	if (isNumeric(value))
		return std::stoi(value);
	throw Impossible();
}

char	Convert::toChar() const {
	int num;

	num = toInt();
	if (isPrintable(num))
		return static_cast<char>(num);
	throw NonDisplayable();
}

double	Convert::toDouble() const {
	return std::stod(value);
}

void	Convert::printChar() const {
		try {
			std::cout << toChar();
		} catch(std::exception& e) {
			std::cout << e.what();
		}
}

void	Convert::printInt() const {
	try {
		std::cout << toInt();
	} catch(std::exception& e) {
		std::cout << e.what();
	}
}

void	Convert::printFloat() const {
	double	num;

	num = toDouble();
	std::cout << static_cast<float>(num);
	if (isNumeric(value)) {
		if (static_cast<int>(num * static_cast<double>(10)) % 10)
			std::cout << "f";
		else
			std::cout << ".0f";
	} else {
		std::cout << "f";
	}
}

void	Convert::printDouble() const {
	double num;
	num = toDouble();
	std::cout << num;
	if (isNumeric(value) && !(static_cast<int>(num * static_cast<double>(10)) % 10))
			std::cout << ".0";
}

std::ostream& operator<<(std::ostream& os, Convert const & c) {
	os << "char : ";
	c.printChar();
	os << std::endl;
	os << "int : ";
	c.printInt();
	os << std::endl;
	os << "flaot : ";
	c.printFloat();
	os << std::endl;
	os << "double : ";
	c.printDouble();
	os << std::endl;
	return os;
}

Convert::Convert(std::string const & s): value(s) {

}

Convert::~Convert() {

}
