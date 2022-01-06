#include "Point.hpp"

bool    Point::bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed	op1;
	Fixed	op2;
	Fixed	op3;

	op1 = cross(Point(b - a), Point(point - b)); //ab bp
	op2 = cross(Point(c - b), Point(point - c)); //bc cp
	op3 = cross(Point(a - c), Point(point - a)); //ca ap
	return (op1 < 0 && op2 < 0 && op3 < 0)
			|| (op1 > 0 && op2 > 0 && op3 > 0);
}
