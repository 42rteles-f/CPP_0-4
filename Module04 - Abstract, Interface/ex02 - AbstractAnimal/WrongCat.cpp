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

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
	std::cout << "WrongCat Default Constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat& tocopy):
WrongAnimal()
{
    std::cout << "WrongCat Copy Constructor called." << std::endl;
    this->type = "WrongCat";
	*this = tocopy;
}

WrongCat::~WrongCat()
{ std::cout << "WrongCat Destructor called." << std::endl; }

WrongCat& WrongCat::operator=(const WrongCat& tocopy) {
	if (this != &tocopy)
		this->type = tocopy.type;

    return (*this);
}

void	WrongCat::makeSound(void) const {
    std::cout << "Wmrrrrrr." << std::endl;
}