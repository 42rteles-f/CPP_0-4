/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 20:08:09 by rteles-f          #+#    #+#             */
/*   Updated: 2023/11/29 14:39:48 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon&  weapon):
name(name), weapon(weapon)
{
	std::cout << "HumanA Constructor Called. Name: " << this->name << std::endl;
}

HumanA::~HumanA() {
	std::cout << "HumanA Destructor Called. Name: " << this->name << std::endl;
}

void	HumanA::attack(void) {
	std::cout << this->name << " attacks with " << weapon.getType() << std::endl;
}
