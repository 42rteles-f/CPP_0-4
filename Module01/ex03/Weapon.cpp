/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 19:41:12 by rteles-f          #+#    #+#             */
/*   Updated: 2023/11/29 14:39:20 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type):
type(type) 
{
	std::cout << "Weapon Constructor Called." << std::endl;
}

Weapon::~Weapon() {
	std::cout << "Weapon Destructor Called." << std::endl;
}

const std::string&	Weapon::getType(void) {
	return (this->type);
}

void	Weapon::setType(std::string type) {
	this->type = type;
}
