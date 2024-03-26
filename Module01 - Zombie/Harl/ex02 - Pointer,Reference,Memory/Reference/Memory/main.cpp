/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:44:30 by rteles-f          #+#    #+#             */
/*   Updated: 2024/01/10 16:25:46 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	hi = "HI THIS IS BRAIN";
	std::string	*stringPTR = &hi;
	std::string	&stringREF = hi;
		
	std::cout << "String Adress: " << &hi << std::endl;
	std::cout << "Pointer Content: " << stringPTR << std::endl;
	std::cout << "Reference Content: " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "String Value: " << hi << std::endl;
	std::cout << "Pointer Value: " << *stringPTR << std::endl;
	std::cout << "Reference Value: " << stringREF << std::endl;
}