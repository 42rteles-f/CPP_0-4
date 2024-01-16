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

#include "Animal.hpp"

Animal::Animal():
type("Animal")
{ std::cout << "Animal Default Constructor called." << std::endl; }

Animal::Animal(const Animal& tocopy):
type("Animal")
{
    std::cout << "Animal Copy Constructor called." << std::endl;
    *this = tocopy;
}

Animal::~Animal()
{ std::cout << "Animal Destructor called." << std::endl; }

Animal& Animal::operator=(const Animal& tocopy) {
	if (this != &tocopy)
		this->type = tocopy.type;

    return (*this);
}

void    Animal::makeSound(void) const {
    std::cout << "What does the Animal say?" << std::endl;
}

const std::string	Animal::getType(void) const {
	return (this->type);
}