/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 21:33:10 by rteles-f          #+#    #+#             */
/*   Updated: 2024/01/15 10:47:39 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap():
name("NoName")
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << name << " FragTrap Default Constructor Called." << std::endl;
}

FragTrap::FragTrap(const FragTrap &tocopy) {
	std::cout << "FragTrap Copy Constructor called." << std::endl;
	*this = tocopy;
}

FragTrap::FragTrap(std::string name):
name(name), ClapTrap(name)
{
	ClapTrap::name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << name << " FragTrap String Constructor Called." << std::endl;
}

FragTrap::~FragTrap()
{ std::cout << "FragTrap " << this->name << " has been destroyed!" << std::endl; }

FragTrap& FragTrap::operator=(const FragTrap &tocopy) {
	std::cout << "FragTrap Assign operator called." << std::endl;
	if (this == &tocopy)
		return (*this);
	this->name = tocopy.name;
	ClapTrap::operator=(tocopy);

	return (*this);
}

void	FragTrap::highFivesGuys(void) {
	std::cout << this->name << " is requesting a High Five." << std::endl;
}
