/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:29:45 by rteles-f          #+#    #+#             */
/*   Updated: 2023/11/29 14:08:40 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N < 1)
		return (NULL);
	Zombie	*horde = new Zombie[N];

	for (int index = 0; index < N; index++)
		horde[index].setName(name);
	return (horde);
}