/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:57:45 by rteles-f          #+#    #+#             */
/*   Updated: 2023/05/15 17:57:45 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl():
functions{&Harl::warning, &Harl::info, &Harl::debug, &Harl::error, &Harl::invalidLevel},
cases{"WARNING", "INFO", "DEBUG", "ERROR", NULL}
{}

Harl::~Harl() {}

void	Harl::invalidLevel(void) {

	std::cout << "Not a Valid Level." << std::endl;
}


void	Harl::complain(std::string level)
{
	int	valid = 0;

	while (cases[valid] && level != cases[valid])
		valid++;
	(this->*functions[valid])();
}

void	Harl::debug(void){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup \
burger. I really do!" << std::endl;
}

void	Harl::info(void){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put \
enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for \
years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
