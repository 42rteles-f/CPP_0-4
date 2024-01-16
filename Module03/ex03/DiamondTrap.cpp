/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 21:33:10 by rteles-f          #+#    #+#             */
/*   Updated: 2024/01/16 15:37:05 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():
name("NoName")
{
	std::cout << "DiamondTrap Default Constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name):
ClapTrap(name + "_clap_name"), name(name)
{
	std::cout << name << " DiamondTrap String Constructor Called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &tocopy):
ClapTrap(tocopy), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap Copy Constructor called." << std::endl;
	*this = tocopy;
}

DiamondTrap::~DiamondTrap()
{ std::cout << "DiamondTrap " << this->name << " has been destroyed!" << std::endl; }

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &tocopy) {
	std::cout << "DiamondTrap Assign operator called." << std::endl;
	if (this == &tocopy)
		return (*this);
	this->name = tocopy.name;
	ScavTrap::operator=(tocopy);
	FragTrap::operator=(tocopy);

	return (*this);
}

void	DiamondTrap::whoAmI(void) {
	std::cout << "Hello, I am a DiamondTrap Class named: " << this->name <<
				 ". I'm also part ClapTrap named: " << ClapTrap::name << std::endl;
}

