/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 21:14:10 by rteles-f          #+#    #+#             */
/*   Updated: 2023/07/21 16:07:35 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	name("NoName"), hitPoints(10), energyPoints(10), attackDamage(0)
{ std::out << "ClapTrap Default Constructor Called."; }

ClapTrap::ClapTrap(std::string name):
	name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{ std::out << "ClapTrap Name Constructor Called."; }

ClapTrap::~ClapTrap()
{ std::cout << this->name << " has been destroyed!" << std::endl; }

void ClapTrap::attack(const std::string& target) {
	std::cout << this->name << " Attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << this->name << " took " << amount << " Damage!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << this->name << " Gained " << amount << " Points!" << std::endl;
} ;
