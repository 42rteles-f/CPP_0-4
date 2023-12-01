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
functions{NULL, &Harl::warning, &Harl::info, &Harl::debug, &Harl::error}
{}

Harl::~Harl() {}

	// for (int i = 1; cases[i] && level != cases[i]; i++)
	// 	;
void	Harl::complain(std::string level)
{
	int	valid = (level == "WARNING") * 1 || (level == "INFO") * 2
		|| (level == "DEBUG") * 3 || (level == "ERROR") * 4;

	if (valid)
		(this->*functions[valid])();
	else
		std::cout << "Not a Valid Level." << std::endl;
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

int	main(void)
{
	Harl	test2;

	test2.complain("IFO");
	return (0);
}