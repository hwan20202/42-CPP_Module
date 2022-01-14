#include "Point.hpp"

/************************************/
/*		public member method		*/
/************************************/

Fixed	Point::getX(void) const {
	return x;
}

Fixed	Point::getY(void) const {
	return y;
}

/************************************/
/*		orthodox canonical form		*/
/************************************/

Point::Point(void): x(0), y(0) {
    // std::cout << "Point default constructor called" << std::endl;
}

Point::Point(Point const & obj) {
	// std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Point   &Point::operator=(Point const & obj) {
	// std::cout << "Assignation operator called" << std::endl;
	if (this != &obj) {
		const_cast< Fixed& >(x) = obj.getX();
		const_cast< Fixed& >(y) = obj.getY();
	}
	return *this;
}

Point::~Point() {
	// std::cout << "Destructor called" << std::endl;
}

/************************************/
/*  	 other constructor      	*/
/************************************/

Point::Point(float const _x, float const _y): x(_x), y(_y) {
	// std::cout << "Float parameter constructor called" << std::endl;
}

Point::Point(Fixed const & _x, Fixed const & _y) :x(_x.toFloat()), y(_y.toFloat()) {
	// std::cout << "Fixed parameter constructor called" << std::endl;
}

/************************************/
/*		operator overloading		*/
/************************************/

Point	Point::operator-(Point const & obj) const {
	return Point(this->getX() - obj.getX(), this->getY() - obj.getY());
}

Fixed	Point::operator*(Point const & obj) const {
	return (x * obj.y) - (y * obj.x);
}
