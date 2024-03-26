/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:21:03 by rteles-f          #+#    #+#             */
/*   Updated: 2024/01/15 11:36:50 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():
type("WrongAnimal")
{ std::cout << "WrongAnimal Default Constructor called." << std::endl; }

WrongAnimal::WrongAnimal(const WrongAnimal& tocopy):
type("WrongAnimal")
{
    std::cout << "WrongAnimal Copy Constructor called." << std::endl;
    *this = tocopy;
}

WrongAnimal::~WrongAnimal()
{ std::cout << "WrongAnimal Destructor called." << std::endl; }

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& tocopy) {
	if (this != &tocopy)
		this->type = tocopy.type;

    return (*this);
}

void    WrongAnimal::makeSound(void) const {
    std::cout << "What does the WrongAnimal say?" << std::endl;
}

const std::string	WrongAnimal::getType(void) const {
	return (this->type);
}