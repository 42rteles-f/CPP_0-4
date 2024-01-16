/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:21:03 by rteles-f          #+#    #+#             */
/*   Updated: 2024/01/15 11:36:50 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal():
type("AAnimal")
{ std::cout << "AAnimal Default Constructor called." << std::endl; }

AAnimal::AAnimal(const AAnimal& tocopy):
type("AAnimal")
{
    std::cout << "AAnimal Copy Constructor called." << std::endl;
    *this = tocopy;
}

AAnimal::~AAnimal()
{ std::cout << "AAnimal Destructor called." << std::endl; }

AAnimal& AAnimal::operator=(const AAnimal& tocopy) {
	if (this != &tocopy)
		this->type = tocopy.type;

    return (*this);
}

const std::string	AAnimal::getType(void) const {
	return (this->type);
}