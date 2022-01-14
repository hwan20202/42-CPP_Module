#include "Fixed.hpp"

/************************************/
/*       public member method       */
/************************************/

int			Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return mRawBits;
}

void		Fixed::setRawBits(int const num) {
	std::cout << "setRawBits member function called" << std::endl;
	mRawBits = num;
}

/************************************/
/*      orthodox canonical form     */
/************************************/

Fixed::Fixed(void): mRawBits(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & obj) {
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::~Fixed(void ) {
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const & obj) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &obj)
		mRawBits = obj.getRawBits();
	return *this;
}
