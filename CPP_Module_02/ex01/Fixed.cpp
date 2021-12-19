#include "Fixed.hpp"

const int   Fixed::fraction = 8;

int     Fixed::getRawBits(void) const
{
    return (_rawBits);
}

void    Fixed::setRawBits(int num)
{
    _rawBits = num << fraction;
}

float   Fixed::toFloat(void) const
{
    return (static_cast<float>(_rawBits) / (1 << fraction));
}

int     Fixed::toInt(void) const
{
    return (_rawBits >> fraction);
}

Fixed::Fixed(void) : _rawBits(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed::Fixed(const int num) :_rawBits(num << fraction)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num) :_rawBits(roundf(num * (1 << fraction)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &obj)
        _rawBits = obj.getRawBits();
    return (*this);
}

std::ostream& operator<<(std::ostream &out, const Fixed &obj)
{
    out << obj.toFloat();
    return (out);
}

// std::ostream& operator<<(std::ostream &out, Fixed const &obj)
// {
//     out << obj.toFloat();
//     return (out);
// }