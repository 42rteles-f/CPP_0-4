/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 20:05:03 by rteles-f          #+#    #+#             */
/*   Updated: 2024/01/15 06:44:20 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
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