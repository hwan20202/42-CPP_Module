#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int                 _rawBits;
    static const int    fraction;
public:
    int     getRawBits(void) const;
    void    setRawBits(int num);
    Fixed(void);
    ~Fixed();
    Fixed(const Fixed& obj);
    Fixed& operator=(const Fixed& obj);
};


#endif