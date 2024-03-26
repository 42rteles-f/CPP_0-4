/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:49:43 by rteles-f          #+#    #+#             */
/*   Updated: 2023/11/27 14:43:48 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(): name(""), last_name(""), nickname(""),
secret(""), number("") {
	this->active = false;
	std::cout << "Contact Created." << std::endl;
}

Contact::~Contact() {
	std::cout << "Contact Destroyed." << std::endl;
}

bool	Contact::isActive(void) {
	return (this->active);
}

void	Contact::Update(std::string secret, std::string number,
			std::string nickname, std::string last_name, std::string name)
{
	this->name = name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->secret = secret;
	this->number = number;
	this->active = true;
}

void	Contact::table_print(std::string string)
{
	if (string.length() <= 7)
		std::cout << std::right << std::setw(8) << string << " ";
	else
		std::cout << string.substr(0, 7) << ". ";
}

void	Contact::MiniPrint(int index)
{
	std::cout << std::right << std::setw(9) << index << " ";
	std::cout << "| ";
	table_print(name);
	std::cout << "| ";
	table_print(last_name);
	std::cout << "| ";
	table_print(nickname);
	std::cout << std::endl;
}

void	Contact::FullPrint(void)
{
	std::cout << "Name:           " << name << std::endl;
	std::cout << "Last Name:      " << last_name << std::endl;
	std::cout << "Nickname:       " << nickname << std::endl;
	std::cout << "Darkest Secret: " << secret << std::endl;
	std::cout << "Phone Number:   " << number << std::endl;
}
