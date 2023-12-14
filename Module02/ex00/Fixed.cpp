/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:29:46 by rteles-f          #+#    #+#             */
/*   Updated: 2023/05/23 15:37:53 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): fixed(0)
{ std::cout << "Fixed Default Constructor Called." << std::endl; }

Fixed::Fixed(const Fixed& tocopy): fixed(0) {
	std::cout << "Fixed Copy Constructor Called." << std::endl;
	*this = tocopy;
}

Fixed::~Fixed()
{ std::cout << "Fixed Destructor Called." << std::endl; }

Fixed& Fixed::operator=(const Fixed &tocopy) {

    std::cout << "Fixed Copy Assignment Operator Called." << std::endl;
	if (this == &tocopy) return (*this);

	this->fixed = tocopy.getRawBits();

	return (*this);
}

int	Fixed::getRawBits(void) const{

    std::cout << "Fixed getRawBits member function called." << std::endl;
	return (this->fixed);
}

void Fixed::setRawBits(int const raw) {
	this->fixed = raw;
}