/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:24:43 by rteles-f          #+#    #+#             */
/*   Updated: 2024/01/10 16:24:43 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {

	private:
		std::string	name;

	public:
		Zombie();
		~Zombie();
		void	setName(std::string name);
		void	announce(void);
} ;

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif