/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 20:36:33 by rteles-f          #+#    #+#             */
/*   Updated: 2024/01/10 16:25:55 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name):
name(name), weapon(NULL)
{
	std::cout << "HumanB Constructor Called. Name: " << this->name << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB Destructor Called. Name: " << this->name << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon){
	this->weapon = &weapon;
}

void	HumanB::attack(void){
	std::string hold = this->weapon ? weapon->getType() : "these hands";

	std::cout << this->name << " attacks with " << hold << std::endl;
}