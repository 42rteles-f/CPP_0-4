/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:54:11 by rteles-f          #+#    #+#             */
/*   Updated: 2023/11/27 15:27:14 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook(): keeper(0) {
	std::cout << "PhoneBook Created." << std::endl;
}

PhoneBook::~PhoneBook(){
	std::cout << "PhoneBook Destroyed." << std::endl;
}

std::string	PhoneBook::ask_input(const char *string)
{
	std::string	input;

	input.clear();
	while (input.empty())
	{
		std::cout << string;
		getline(std::cin, input);
		if (input.empty())
			std::cout << "Invalid Input.\n" << std::endl;
	}
	return (input);
}

void	PhoneBook::Add(void)
{
	contacts[keeper].Update(ask_input("Enter Dark Secret:  "),
							ask_input("Enter Phone Number: "),
							ask_input("Enter Nickname:     "),
							ask_input("Enter Last Name:    "),
							ask_input("Enter First Name:   "));
	keeper++;
	if (keeper > 7)
		keeper = 0;
}

void	PhoneBook::Search(void)
{
	std::string	input;
	int			index = -1;

	for (int i = 0; contacts[i].isActive(); i++)
		contacts[i].MiniPrint(i);

	input = ask_input("Enter Desired Contact: ");
	if (input.length() == 1 && input[0] >= '0' && input[0] < '8')
		index = atoi(input.c_str());
	if (index > -1 && contacts[index].isActive())
		contacts[index].FullPrint();
	else
		std::cout << "Invalid Index." << std::endl;
}

