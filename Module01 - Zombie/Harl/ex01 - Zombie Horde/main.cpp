/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:58:38 by rteles-f          #+#    #+#             */
/*   Updated: 2024/01/11 15:10:33 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	nzombies;

	nzombies = 10;
	Zombie	*horde = zombieHorde(nzombies, "Carlos");
	for (int index = 0; index < nzombies; index++)
		horde[index].announce();
	delete[] (horde);

	return (0);
}