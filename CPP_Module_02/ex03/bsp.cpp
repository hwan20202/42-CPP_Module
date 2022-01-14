#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed	op1;
	Fixed	op2;
	Fixed	op3;

	op1 = Point(b - a) * Point(point - b); //ab bp
	op2 = Point(c - b) * Point(point - c); //bc cp
	op3 = Point(a - c) * Point(point - a); //ca ap
	return (op1 < 0 && op2 < 0 && op3 < 0)
			|| (op1 > 0 && op2 > 0 && op3 > 0);
}
