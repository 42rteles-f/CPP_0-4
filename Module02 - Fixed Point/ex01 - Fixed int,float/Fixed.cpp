/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:29:46 by rteles-f          #+#    #+#             */
/*   Updated: 2024/01/15 06:44:03 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): fixed(0)
{ std::cout << "Fixed Default Constructor Called." << std::endl; }

Fixed::Fixed(const Fixed& tocopy): fixed(0) {
	std::cout << "Fixed Copy Constructor Called." << std::endl;
	*this = tocopy;
}

Fixed::Fixed(const int n): fixed(n << fractional)
{ std::cout << "Fixed Int Constructor Called." << std::endl; }

Fixed::Fixed(const float n): fixed(std::roundf(n * (1 << fractional)))
{ std::cout << "Fixed Float Constructor Called." << std::endl; }

Fixed::~Fixed()
{ std::cout << "Fixed Destructor Called." << std::endl; }

Fixed& Fixed::operator=(const Fixed &tocopy) {

    std::cout << "Fixed Copy Assignment Operator Called." << std::endl;
	if (this == &tocopy) return (*this);

	this->fixed = tocopy.getRawBits();

	return (*this);
}

std::ostream& operator<<(std::ostream& stream, const Fixed& obj) {
    stream << obj.toFloat();
    return (stream);
}

int	Fixed::getRawBits(void) const{
	return (this->fixed);
}

void Fixed::setRawBits(int const raw) {
	this->fixed = raw;
}

float	Fixed::toFloat(void) const {
    return ((float)this->getRawBits() / (1 << fractional));
}

int	Fixed::toInt(void) const {
    return (this->fixed >> fractional);
}
