/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:25:38 by rteles-f          #+#    #+#             */
/*   Updated: 2024/01/16 21:22:49 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():
thoughts(new Brain)
{
    this->type = "Cat";
	std::cout << "Cat Default Constructor called." << std::endl;
}

Cat::Cat(const Cat& tocopy):
Animal(), thoughts(new Brain)
{
    std::cout << "Cat Copy Constructor called." << std::endl;
	*this = tocopy;
}

Cat::~Cat()
{
	if (thoughts) delete thoughts;
	std::cout << "Cat Destructor called." << std::endl;
}

Cat& Cat::operator=(const Cat& tocopy) {
	if (this != &tocopy)
		this->type = tocopy.type;

	if (!thoughts)
		thoughts = new Brain;
	*(this->thoughts) = *(tocopy.thoughts);

    return (*this);
}

void	Cat::makeSound(void) const {
    std::cout << "Meowwwwww." << std::endl;
}