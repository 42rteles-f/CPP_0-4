/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:29:46 by rteles-f          #+#    #+#             */
/*   Updated: 2024/01/15 06:44:27 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const Fixed& tocopy): fixed(0) {

	std::cout << "Fixed Copy Constructor Called." << std::endl;
	*this = tocopy;
}

Fixed::Fixed(): fixed(0)
{ std::cout << "Fixed Default Constructor Called." << std::endl; }

Fixed::Fixed(const int n): fixed(n << fractional)
{ std::cout << "Fixed Int Constructor Called." << std::endl; }

Fixed::Fixed(const float n): fixed(std::roundf(n * (1 << fractional)))
{ std::cout << "Fixed Float Constructor Called." << std::endl; }

Fixed::~Fixed()
{ std::cout << "Fixed Destructor Called." << std::endl; }

std::ostream& operator<<(std::ostream& stream, const Fixed& obj) {

    stream << obj.toFloat();
    return (stream);
}

Fixed& Fixed::operator=(const Fixed &tocopy) {

    std::cout << "Fixed Copy Assignment Operator Called." << std::endl;
	if (this == &tocopy) return (*this);

	this->fixed = tocopy.getRawBits();

	return (*this);
}

bool Fixed::operator==(const Fixed &other) const {
	return (this->fixed == other.fixed);
}

bool Fixed::operator!=(const Fixed &other) const {
	return (this->fixed != other.fixed);
}

bool Fixed::operator>(const Fixed &other) const {
	return (this->fixed > other.fixed);
}

bool Fixed::operator>=(const Fixed &other) const {
	return (this->fixed >= other.fixed);
}

bool Fixed::operator<(const Fixed &other) const {
	return (this->fixed < other.fixed);
}

bool Fixed::operator<=(const Fixed &other) const {
	return (this->fixed <= other.fixed);
}

Fixed Fixed::operator+(const Fixed &other) const {
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed &other) const {
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed &other) const {
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &other) const {
	return (other.toFloat() != 0 ? Fixed(this->toFloat() / other.toFloat()) : Fixed(0));
}

Fixed	Fixed::operator++(int) {

	Fixed	temp = *this;
	this->fixed++;
	return (temp);
}

Fixed	Fixed::operator++(void) {
	this->fixed++;
	return (*this);
}

Fixed	Fixed::operator--(int) {

	Fixed	temp = *this;
	this->fixed--;
	return (temp);
}

Fixed	Fixed::operator--(void) {
	this->fixed--;
	return (*this);
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

Fixed& Fixed::min(Fixed& first, Fixed& second) {
	return (first.getRawBits() < second.getRawBits() ? first : second);
}

const Fixed& Fixed::min(const Fixed& first, const Fixed& second) {
	return (first.getRawBits() < second.getRawBits() ? first : second);
}

Fixed& Fixed::max(Fixed& first, Fixed& second) {
	return (first.getRawBits() > second.getRawBits() ? first : second);
}

const Fixed& Fixed::max(const Fixed& first, const Fixed& second) {
	return (first.getRawBits() > second.getRawBits() ? first : second);
}
