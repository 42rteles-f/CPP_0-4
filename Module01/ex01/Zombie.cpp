/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:01:08 by rteles-f          #+#    #+#             */
/*   Updated: 2023/05/08 21:01:08 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

using namespace std;

Zombie::Zombie(void): name("") {
	std::cout << "Zombie Constructor Called." << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << "Zombie " << this->name << " has died." << std::endl;
}

void	Zombie::announce(void) {
	std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}