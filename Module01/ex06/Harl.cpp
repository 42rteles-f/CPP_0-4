/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:26:35 by rteles-f          #+#    #+#             */
/*   Updated: 2024/01/10 16:26:35 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl():
cases{"DEBUG", "INFO", "WARNING", "ERROR", NULL}
{ std::cout << "Harl Constructor Called." << std::endl; }

Harl::~Harl()
{ std::cout << "Harl Destructor Called." << std::endl; }

void	Harl::invalidLevel(void)
{ std::cout << "[ Probably complaining about insignificant problems ]" << std::endl; }


void	Harl::complain(std::string level)
{
	int	valid = 0;

	while (cases[valid] && level != cases[valid])
		valid++;
	switch (valid)
	{
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break ;
		default:
			invalidLevel();
	}
}

void Harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
