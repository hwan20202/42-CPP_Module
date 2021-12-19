#include "Point.hpp"
#include <iostream>

int main(void)
{
    Point p1(0, 0);
    Point p2(1, 2);
    Point p3(2, 0);
    Point p(1, 1);

    std::cout << Point::bsp(p1, p2, p3, p) << std::endl;

    return 0;
}