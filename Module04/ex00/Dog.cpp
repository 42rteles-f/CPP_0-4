/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:26:27 by rteles-f          #+#    #+#             */
/*   Updated: 2024/01/15 11:37:28 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():
type("Dog")
{ std::cout << "Dog Default Constructor called." << std::endl; }

Dog::Dog(Dog& const tocopy):
type("Dog")
{
    std::cout << "Dog Copy Constructor called." << std::endl;
    *this = tocopy;
}

Dog::~Dog()
{ std::cout << "Dog Destructor called." << std:endl; }

Dog& Dog::operator=(const Dog& tocopy) {
    this->type = tocopy.type;
    
    return (*this);
}

void    makeSound(void) {
    std::cout << "Auuuuuuuuuuuuuuu." << std::endl;
}