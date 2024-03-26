/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 21:14:10 by rteles-f          #+#    #+#             */
/*   Updated: 2024/01/16 10:01:43 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():
	name("NoName"), hitPoints(10), energyPoints(10), attackDamage(0)
{ std::cout << name << " ClapTrap Default Constructor Called." << std::endl; }

ClapTrap::ClapTrap(std::string name):
	name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{ std::cout << name << " ClapTrap String Constructor Called." << std::endl; }

ClapTrap::ClapTrap(const ClapTrap &tocopy) {
	std::cout << "ClapTrap Copy Constructor called." << std::endl;
	*this = tocopy;
}

ClapTrap::~ClapTrap()
{ std::cout << "ClapTrap " << this->name << " has been destroyed!" << std::endl; }

ClapTrap& ClapTrap::operator=(const ClapTrap &tocopy) {
	std::cout << "ClapTrap Assign operator called." << std::endl;
	if (this == &tocopy)
		return (*this);
	this->name = tocopy.name;
	this->hitPoints = tocopy.hitPoints;
	this->energyPoints = tocopy.energyPoints;
	this->attackDamage = tocopy.attackDamage;

	return (*this);
}

void ClapTrap::attack(const std::string& target) {
	if (this->hitPoints < 1)
		std::cout << this->name << " not enough hp to atack." << std::endl;
	else if (this->energyPoints < 1)
		std::cout << this->name << " not enough energy to atack." << std::endl;
	else {
		this->energyPoints--;
		std::cout << this->name << " Clap Attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << this->name << " took " << amount << " Damage!" << std::endl;
	if (this->hitPoints > 0)
		this->hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->hitPoints < 1)
		std::cout << this->name << " not enough hp to repair." << std::endl;
	else if (this->energyPoints < 1)
		std::cout << this->name << " not enough energy to repair." << std::endl;
	else {
		this->hitPoints += amount;
		this->energyPoints--;
		std::cout << this->name << " Gained " << amount << " Hit Points!" << std::endl;
	}
}
