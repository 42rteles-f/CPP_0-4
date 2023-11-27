/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 19:41:12 by rteles-f          #+#    #+#             */
/*   Updated: 2023/05/12 20:55:31 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string   type) {
	this->type = type;
}

Weapon::Weapon() {
	this->type = "Weapon";
}

Weapon::~Weapon()
{}

const std::string&	Weapon::getType(void) {
	return (this->type);
}

void	Weapon::setType(std::string type) {
	this->type = type;
}
