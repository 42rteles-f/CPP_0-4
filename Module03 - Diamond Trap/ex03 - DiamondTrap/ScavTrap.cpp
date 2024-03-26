/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 21:33:10 by rteles-f          #+#    #+#             */
/*   Updated: 2024/01/16 14:42:29 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap():
gateMode(0)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << name << " ScavTrap Default Constructor Called." << std::endl;	
}

ScavTrap::ScavTrap(std::string name):
ClapTrap(name), gateMode(0)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << name << " ScavTrap String Constructor Called." << std::endl;	
}

ScavTrap::ScavTrap(const ScavTrap &tocopy):
ClapTrap(tocopy)
{
	std::cout << "ScavTrap Copy Constructor called." << std::endl;
	*this = tocopy;
}

ScavTrap::~ScavTrap()
{ std::cout << "ScavTrap " << this->name << " has been destroyed!" << std::endl; }

ScavTrap& ScavTrap::operator=(const ScavTrap &tocopy) {
	std::cout << "ScavTrap Assign operator called." << std::endl;
	if (this == &tocopy)
		return (*this);
	this->gateMode = tocopy.gateMode;
	ClapTrap::operator=(tocopy);

	return (*this);
}

void ScavTrap::attack(const std::string& target) {
	if (this->hitPoints < 1)
		std::cout << this->name << " not enough hp to atack." << std::endl;
	else if (this->energyPoints < 1)
		std::cout << this->name << " not enough energy to atack." << std::endl;
	else {
		this->energyPoints--;
		std::cout << this->name << " Scav Attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
	}
}

void	ScavTrap::guardGate(void) {
	this->gateMode = 1;
	std::cout << this->name << " ScavTrap is now in Gate keeper mode." << std::endl;
}
