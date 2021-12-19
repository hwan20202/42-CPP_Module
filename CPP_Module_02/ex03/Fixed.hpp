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
    
    static Fixed &min(Fixed &obj1, Fixed &obj2);
    static Fixed &max(Fixed &obj1, Fixed &obj2);
    static const Fixed &min(const Fixed &obj1, const Fixed &obj2);
    static const Fixed &max(const Fixed &obj1, const Fixed &obj2);


    Fixed(void);
    Fixed(const int num);
    Fixed(const float num);
    Fixed(const Fixed& obj);
    ~Fixed();
    Fixed&  operator = (const Fixed& obj);
    bool    operator > (const Fixed& obj) const;
    bool    operator < (const Fixed& obj) const;
    bool    operator <= (const Fixed& obj) const;
    bool    operator >= (const Fixed& obj) const;
    bool    operator == (const Fixed& obj) const;
    bool    operator != (const Fixed& obj) const;
    Fixed   operator + (const Fixed& obj) const;
    Fixed   operator - (const Fixed& obj) const;
    Fixed   operator * (const Fixed& obj) const;
    Fixed   operator / (const Fixed& obj) const;
    Fixed   &operator ++ (void);
    Fixed   operator ++ (int notused);
};

std::ostream& operator<<(std::ostream &out, const Fixed &obj);

#endif