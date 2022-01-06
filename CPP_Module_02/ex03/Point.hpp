#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point {
private:
	Fixed const	x;
	Fixed const	y;

	static Fixed	cross(Point const v1, Point const v2);

public:
	static bool	bsp(Point const a, Point const b, Point const c, Point const point);

	Fixed	getX(void) const;
	Fixed	getY(void) const;
	Point&	operator=(Point const & obj);
	Point	operator-(Point const & obj) const;

	Point(void);
	Point(float const _x, float const _y);
	Point(Point const & obj);
	~Point();
	Point(Fixed const & _x, Fixed const & _y);
};

#endif