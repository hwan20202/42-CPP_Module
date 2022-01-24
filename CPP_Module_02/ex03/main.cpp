#include "Point.hpp"
#include <iostream>

int main(void)
{
	Point a(0.0, 2.0);
	Point b(-2, 0);
	Point c(2, 0);

	Point p1(0, 1); // in the middle of triangle
	Point p2(3, 3); // out of the triangle
	Point p3(2, 0); // point of triangle's vertex
	Point p4(1, 1); // on the line of triangle

	std::cout << bsp(a, a, a, a) << std::endl;
	std::cout << bsp(a, a, c, a) << std::endl;
	// std::cout << bsp(a, b, c, p3) << std::endl;
	// std::cout << bsp(a, b, c, p4) << std::endl;

	return 0;
}