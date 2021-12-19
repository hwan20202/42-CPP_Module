#include "Point.hpp"

Fixed   Point::cross(Point &v1, Point &v2) const
{
    return ((v1.getX() * v2.getY()) - ((v1.getY()) * (v2.getX())));
}
Fixed   &Point::getX(void) const
{
    return (x);
}
Fixed   &Point::getY(void) const
{
    return (y);
}
Point::Point(void):x(0), y(0)
{

}
Point::Point(const float _x, const float _y):x(_x), y(_y)
{

}
Point::Point(const Point &obj)
{
    *this = obj;
}
Point::~Point()
{
    std::cout << "destructor called" << std::endl;
}
Point   &Point::operator = (const Point &obj)
{
    this->x = obj.getX();
    this->y = obj.getY();
    return (*this);
}
Point   Point::operator - (const Point &obj)
{
    return (Point(this->getX() - obj.getX(), this->getY() - obj.getY()));
}
