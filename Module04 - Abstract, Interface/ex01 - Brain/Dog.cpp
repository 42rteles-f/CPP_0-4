/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:26:27 by rteles-f          #+#    #+#             */
/*   Updated: 2024/01/16 21:18:08 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():
thoughts(new Brain)
{
	this->type = "Dog";
	std::cout << "Dog Default Constructor called." << std::endl;
}

Dog::Dog(const Dog& tocopy):
Animal(), thoughts(new Brain)
{
    std::cout << "Dog Copy Constructor called." << std::endl;
	*this = tocopy;
}

Dog::~Dog()
{
	if (thoughts) delete thoughts;
	std::cout << "Dog Destructor called." << std::endl;
}

Dog& Dog::operator=(const Dog& tocopy) {
	if (this != &tocopy)
		this->type = tocopy.type;

	if (!thoughts)
		thoughts = new Brain;
	*(this->thoughts) = *(tocopy.thoughts);

    return (*this);
}

void    Dog::makeSound(void) const {
    std::cout << "Auuuuuuuuuuuuuuu." << std::endl;
}