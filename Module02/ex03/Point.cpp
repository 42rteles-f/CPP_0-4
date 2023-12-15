#include "Point.hpp"

Point::Point() : x(0), y(0)
{ std::cout << "Point Default Constructor Called." << std::endl; }

Point::Point(Point& tocopy) : x(tocopy.x), y(tocopy.y)
{ std::cout << "Point Copy Constructor Called." << std::endl; }

Point::Point(const float a, const float b) : x(a), y(b)
{ std::cout << "Point Float Constructor Called." << std::endl; }

Point::~Point()
{ std::cout << "Point Destructor Called." << std::endl; }

Fixed	Point::getX(void) const {
	return (this->x);
}

Fixed	Point::getY(void) const {
	return (this->y);
}

Point&	Point::operator=(const Point& receive) {
	return (*this);
}
