#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
    Fixed   x;
    Fixed   y;

    static Fixed   cross(Point &v1, Point &v2) const;

public:
    Point(void);
    Point(const float _x, const float _y);
    Point(const Point &obj);
    ~Point();
    Point(const Fixed &_x, const Fixed &_y);
    Fixed   &getX(void) const;
    Fixed   &getY(void) const;
    Point   &operator = (const Point &obj);
    Point   operator - (const Point &obj);


    static bool    bsp(const Point &t1, const Point &t2, const Point &t3, const Point &p);
};


#endif