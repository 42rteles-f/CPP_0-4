/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 20:05:03 by rteles-f          #+#    #+#             */
/*   Updated: 2024/01/15 06:44:30 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	Point a(0.0, 0.0), b(4.0, 0.0), c(2.0, 3.0), point(2.0, 1.0);  // Point inside the triangle

	// Point a(1.0, 1.0), b(5.0, 1.0), c(3.0, 4.0), point(3.0, 2.0);  // Point inside the triangle

	// Point a(-2.0, -3.0), b(2.0, -3.0), c(0.0, 0.0), point(0.0, -2.0);  // Point inside the triangle

	// Point a(0.0, 0.0), b(4.0, 0.0), c(2.0, 3.0), point(5.0, 2.0);  // Point outside the triangle

	// Point a(1.0, 1.0), b(5.0, 1.0), c(3.0, 4.0), point(6.0, 3.0);  // Point outside the triangle

	// Point a(-2.0, -3.0), b(2.0, -3.0), c(0.0, 0.0), point(-1.0, 1.0);  // Point outside the triangle

	std::cout << bsp(a, b, c, point) << std::endl;

	return 0;
}


/*
Ad-hoc polymorphism, operator overloading
and Orthodox Canonical class form
Create a class in Orthodox Canonical Form that represents a fixed-point number:
• Private members:
	◦ An integer to store the fixed-point number value.
	◦ A static constant integer to store the number of fractional bits. Its value
	will always be the integer literal 8.
• Public members:
	◦ A default constructor that initializes the fixed-point number value to 0.
	◦ A copy constructor.
	◦ A copy assignment operator overload.
	◦ A destructor.
	◦ A member function int getRawBits( void ) const;
	that returns the raw value of the fixed-point value.
	◦ A member function void setRawBits( int const raw );
	that sets the raw value of the fixed-point number.
*/