/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 10:12:08 by rteles-f          #+#    #+#             */
/*   Updated: 2024/01/15 08:01:23 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap: public ClapTrap {
	private:
		std::string	name;
		int			gateMode;

	public:
		ScavTrap();
		ScavTrap(const ScavTrap &tocopy);
		ScavTrap(std::string name);
		~ScavTrap();

		ScavTrap &operator=(const ScavTrap &tocopy);

		void guardGate();
} ;

#endif
