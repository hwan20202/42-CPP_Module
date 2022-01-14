#include "Fixed.hpp"
#include <cmath>

/************************************/
/*       public member method       */
/************************************/

int		Fixed::getRawBits(void) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return mRawBits;
}

void	Fixed::setRawBits(int num) {
	// std::cout << "setRawBits member function called" << std::endl;
	mRawBits = num;
}

int		Fixed::toInt(void) const {
	return mRawBits >> mFractionalBits;
}

float	Fixed::toFloat(void) const {
	return (float)mRawBits / (1 << mFractionalBits);
}

/************************************/
/*     orthodox canonical form      */
/************************************/

Fixed::Fixed(void): mRawBits(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & obj) {
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed& Fixed::operator=(const Fixed& obj) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &obj)
		mRawBits = obj.mRawBits;
	return *this;
}

Fixed::~Fixed(void ) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int const num): mRawBits(num << mFractionalBits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const num): mRawBits(roundf(num * (1 << mFractionalBits))){
	std::cout << "Float constructor called" << std::endl;
}

/************************************/
/*      operator overloading        */
/************************************/

std::ostream& operator<<(std::ostream& out, Fixed const & _fixed) {
	out << _fixed.toFloat();
	return out;
}
