/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 21:33:10 by rteles-f          #+#    #+#             */
/*   Updated: 2024/01/16 14:46:57 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << name << " FragTrap Default Constructor Called." << std::endl;
}

FragTrap::FragTrap(std::string name):
ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << name << " FragTrap String Constructor Called." << std::endl;
}

FragTrap::FragTrap(const FragTrap &tocopy):
ClapTrap(tocopy)
{
	std::cout << "FragTrap Copy Constructor called." << std::endl;
	*this = tocopy;
}

FragTrap::~FragTrap()
{ std::cout << "FragTrap " << this->name << " has been destroyed!" << std::endl; }

FragTrap& FragTrap::operator=(const FragTrap &tocopy) {
	std::cout << "FragTrap Assign operator called." << std::endl;
	if (this == &tocopy)
		return (*this);
	ClapTrap::operator=(tocopy);

	return (*this);
}

void FragTrap::attack(const std::string& target) {
	if (this->hitPoints < 1)
		std::cout << this->name << " not enough hp to atack." << std::endl;
	else if (this->energyPoints < 1)
		std::cout << this->name << " not enough energy to atack." << std::endl;
	else {
		this->energyPoints--;
		std::cout << this->name << " Frag Attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
	}
}

void	FragTrap::highFivesGuys(void) {
	std::cout << this->name << " is requesting a High Five." << std::endl;
}
