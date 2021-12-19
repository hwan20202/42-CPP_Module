#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int                 _rawBits;
    static const int    fraction;
public:
    int     getRawBits(void) const;
    void    setRawBits(int num);

    float   toFloat(void) const;
    int     toInt(void) const;
    
    Fixed(void);
    Fixed(const int num);
    Fixed(const float num);
    Fixed(const Fixed& obj);
    ~Fixed();
    Fixed& operator = (const Fixed& obj);
};

std::ostream& operator<<(std::ostream &out, const Fixed &obj);

#endif