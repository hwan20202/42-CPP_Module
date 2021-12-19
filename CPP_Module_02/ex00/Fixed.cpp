#include <Fixed.hpp>

const int   fraction = 8;

int     Fixed::getRawBits(void) const
{
    return (_rawBits);
}

void    Fixed::setRawBits(int num)
{
    _rawBits = num << fraction;
}

Fixed::Fixed(void)
{
    _rawBits = 0;
    std::cout << "Default Constructor called." << std::endl;
}

Fixed::Fixed(const Fixed& obj)
{
    std::cout << "Copy Constructor called." << std::endl;
    *this = obj;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called." << std::endl;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &obj)
        _rawBits = obj.getRawBits();
    return (*this);
}
