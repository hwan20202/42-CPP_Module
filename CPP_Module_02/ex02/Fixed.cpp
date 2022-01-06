#include "Fixed.hpp"

/************************************/
/*			static member			*/
/************************************/

int const	Fixed::mFractionalBits = 8;


Fixed &Fixed::min(Fixed &obj1, Fixed &obj2) {
	if (obj1 <= obj2)
		return obj1;
	return obj2;
}

Fixed &Fixed::max(Fixed &obj1, Fixed &obj2) {
	if (obj1 >= obj2)
		return obj1;
	return obj2;
}

Fixed const & Fixed::min(Fixed const & obj1, Fixed const & obj2) {
    if (obj1 <= obj2)
        return obj1;
    return obj2;
}

Fixed const & Fixed::max(Fixed const & obj1, Fixed const & obj2) {
    if (obj1 >= obj2)
        return obj1;
    return obj2;
}

/************************************/
/*			public member			*/
/************************************/

int		Fixed::getRawBits(void) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return mRawBits;
}

void	Fixed::setRawBits(int num) {
	std::cout << "setRawBits member function called" << std::endl;
	mRawBits = num;
}

int		Fixed::toInt(void) const {
	return mRawBits >> mFractionalBits;
}

float	Fixed::toFloat(void) const {
	return (float)mRawBits / (1 << mFractionalBits);
}

/************************************/
/*		orthodox canonical form		*/
/************************************/

Fixed::Fixed(void): mRawBits(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & obj) {
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed& Fixed::operator=(Fixed const & obj) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &obj)
		mRawBits = obj.getRawBits();
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
/*		operator overloading		*/
/************************************/

std::ostream	&operator<<(std::ostream &out, Fixed const & _fixed) {
	out << _fixed.toFloat();
	return out;
}

bool	Fixed::operator>(Fixed const & obj) const {
	return getRawBits() > obj.getRawBits();
}

bool	Fixed::operator<(Fixed const & obj) const {
	return getRawBits() < obj.getRawBits();
}

bool	Fixed::operator<=(Fixed const & obj) const {
	return getRawBits() <= obj.getRawBits();
}

bool	Fixed::operator>=(Fixed const & obj) const {
	return getRawBits() >= obj.getRawBits();
}

bool	Fixed::operator==(Fixed const & obj) const {
	return getRawBits() == obj.getRawBits();
}

bool	Fixed::operator!=(Fixed const & obj) const {
	return getRawBits() != obj.getRawBits();
}

Fixed	Fixed::operator+(Fixed const & obj) const {
	Fixed	ret;

	ret.setRawBits(mRawBits + obj.getRawBits());
	return ret;
}

Fixed	Fixed::operator-(Fixed const & obj) const {
	Fixed	ret;

	ret.setRawBits(mRawBits - obj.getRawBits());
	return ret;
}

Fixed	Fixed::operator*(Fixed const & obj) const {
	Fixed	ret(toFloat() * obj.toFloat());

	return ret;
}

Fixed	Fixed::operator/(Fixed const & obj) const {
	Fixed	ret(toFloat() / obj.toFloat());

	return ret;
}

Fixed	&Fixed::operator++(void) {
	std::cout << "prefix operator called" << std::endl;
	mRawBits++;
	return *this;
}

Fixed	Fixed::operator++(int notused) {
	Fixed	tmp(*this);

	(void)notused;
	mRawBits++;
	std::cout << "postfix operator called" << std::endl;
	return tmp;
}

Fixed	&Fixed::operator--(void) {
	mRawBits--;
	std::cout << "prefix operator called" << std::endl;
	return *this;
}

Fixed	Fixed::operator--(int notused) {
	std::cout << "postfix operator called" << std::endl;
	Fixed tmp(*this);

	(void)notused;
	mRawBits--;
	return tmp;
}
