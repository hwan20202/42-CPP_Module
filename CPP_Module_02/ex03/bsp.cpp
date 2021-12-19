#include "Point.hpp"

bool    Point::bsp(const Point &t1, const Point &t2, const Point &t3, const Point &p)
{
    Fixed a, b, c;
    a = cross(Point(t2 - t1), Point(p - t2)); //t1t2 t2p
    b = cross(Point(t3 - t2), Point(p - t3)); //t2t3 t3p
    c = cross(Point(t1 - t3), Point(p - t1)); //t3t1 v1p
    return ((a < 0 && b < 0 && c < 0)
            || (a > 0 && b > 0 && c > 0));
}
