/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:57:27 by rteles-f          #+#    #+#             */
/*   Updated: 2023/05/05 19:57:27 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(int counter, char **input)
{
	PhoneBook	book;
	std::string	command;

	while (true)
	{
		command = book.ask_input("Enter Command: ");
		if (command == "ADD")
			book.Add();
		else if (command == "SEARCH")
			book.Search();
		else if (command == "EXIT")
			return (0);
		else
			std::cout << "Wrong Usage. Valid commands: 'ADD', 'SEARCH' and 'EXIT'" << std::endl;
		std::cout << std::endl;
	}
}
