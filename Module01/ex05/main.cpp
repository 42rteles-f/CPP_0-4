/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:26:27 by rteles-f          #+#    #+#             */
/*   Updated: 2024/01/10 16:26:27 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	test2;
	std::cout << "-------------------------------" << std::endl;
	test2.complain("DEBUG");
	std::cout << "-------------------------------" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	test2.complain("ERROR");
	std::cout << "-------------------------------" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	test2.complain("WARNING");
	std::cout << "-------------------------------" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	test2.complain("INFO");
	std::cout << "-------------------------------" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	test2.complain("");
	std::cout << "-------------------------------" << std::endl;

	// test2.complain("INFO");
	return (0);
}