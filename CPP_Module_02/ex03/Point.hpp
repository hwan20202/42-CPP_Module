#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point {
private:
	Fixed const	x;
	Fixed const	y;
public:
	Fixed	getX(void) const;
	Fixed	getY(void) const;

	Point(void);
	Point(Point const & obj);
	Point	&operator=(Point const & obj);
	~Point();

	Point(float const _x, float const _y);
	Point(Fixed const & _x, Fixed const & _y);

	Point	operator-(Point const & obj) const;
	Fixed	operator*(Point const & obj) const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif