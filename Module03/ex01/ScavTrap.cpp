/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 21:33:10 by rteles-f          #+#    #+#             */
/*   Updated: 2023/05/29 10:15:16 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):
	name(name)
{}

ScavTrap::~ScavTrap()
{}

void	ScavTrap::guardGate(void)
{
	std::cout << this->name << " is on Guard Mode." << std::endl;
	gateMode = 1; 
}
