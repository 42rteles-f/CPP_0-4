/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:25:38 by rteles-f          #+#    #+#             */
/*   Updated: 2024/01/15 11:37:14 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():
type("Cat")
{ std::cout << "Cat Default Constructor called." << std::endl; }

Cat::Cat(Cat& const tocopy):
type("Cat")
{
    std::cout << "Cat Copy Constructor called." << std::endl;
    *this = tocopy;
}

Cat::~Cat()
{ std::cout << "Cat Destructor called." << std:endl; }

Cat& Cat::operator=(const Cat& tocopy) {
    this->type = tocopy.type;
    
    return (*this);
}

void    makeSound(void) {
    std::cout << "Meowwwwww." << std::endl;
}