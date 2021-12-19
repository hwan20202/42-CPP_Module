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
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed::Fixed(const int num) :_rawBits(num << fraction)
{
    // std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num) :_rawBits(roundf(num * (1 << fraction)))
{
    // std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
    // std::cout << "Assignation operator called" << std::endl;
    if (this != &obj)
        _rawBits = obj.getRawBits();
    return (*this);
}

std::ostream& operator<<(std::ostream &out, const Fixed &obj)
{
    out << obj.toFloat();
    return (out);
}

bool    Fixed::operator > (const Fixed& obj) const
{
    return (this->getRawBits() > obj.getRawBits());
}
bool    Fixed::operator < (const Fixed& obj) const
{
    return (this->getRawBits() < obj.getRawBits());
}
bool    Fixed::operator <= (const Fixed& obj) const
{
    return (this->getRawBits() <= obj.getRawBits());
}
bool    Fixed::operator >= (const Fixed& obj) const
{
    return (this->getRawBits() >= obj.getRawBits());
}
bool    Fixed::operator == (const Fixed& obj) const
{
    return (this->getRawBits() == obj.getRawBits());
}
bool    Fixed::operator != (const Fixed& obj) const
{
    return (this->getRawBits() != obj.getRawBits());
}
Fixed   Fixed::operator + (const Fixed& obj) const
{
    Fixed   ret(this->toFloat() + obj.toFloat());
    return (ret);
}
Fixed   Fixed::operator - (const Fixed& obj) const
{
    Fixed   ret(this->toFloat() - obj.toFloat());
    return (ret);
}
Fixed   Fixed::operator * (const Fixed& obj) const
{
    Fixed   ret(this->toFloat() * obj.toFloat());
    return (ret);
}
Fixed   Fixed::operator / (const Fixed& obj) const
{
    Fixed   ret(this->toFloat() / obj.toFloat());
    return (ret);
}
Fixed   &Fixed::operator ++ (void)
{
    // std::cout << "prefix operator called" << std::endl;
    this->_rawBits++;
    return (*this);
}
Fixed   Fixed::operator ++ (int notused)
{
    // std::cout << "postfix operator called" << std::endl;
    Fixed tmp(*this);

    this->_rawBits++;
    return (tmp);
}

Fixed &Fixed::min(Fixed &obj1, Fixed &obj2)
{
    if (obj1 <= obj2)
        return (obj1);
    else
        return (obj2);
}
Fixed &Fixed::max(Fixed &obj1, Fixed &obj2)
{
    if (obj1 >= obj2)
        return (obj1);
    else
        return (obj2);
}
const Fixed &Fixed::min(const Fixed &obj1, const Fixed &obj2)
{
    if (obj1 <= obj2)
        return (obj1);
    else
        return (obj2);
}
const Fixed &Fixed::max(const Fixed &obj1, const Fixed &obj2)
{
    if (obj1 >= obj2)
        return (obj1);
    else
        return (obj2);
}
