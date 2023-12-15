#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class Point {
	private:
		Fixed const x;
		Fixed const y;

	public:
		Point();
		Point(Point& tocopy);
		Point(const float a, const float b);
		~Point();

		Fixed	getX(void) const;
		Fixed	getY(void) const;

		Point&	operator=(const Point& receive);
} ;

#endif