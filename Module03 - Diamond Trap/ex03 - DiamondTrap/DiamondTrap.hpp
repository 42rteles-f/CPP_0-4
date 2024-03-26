/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 10:12:08 by rteles-f          #+#    #+#             */
/*   Updated: 2024/01/16 15:33:04 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>

class DiamondTrap: public ScavTrap, public FragTrap {
	private:
		std::string	name;
		using ScavTrap::energyPoints;
		using FragTrap::attackDamage;
		using FragTrap::hitPoints;

	public:
		DiamondTrap();
		DiamondTrap(const DiamondTrap &tocopy);
		DiamondTrap(std::string name);
		~DiamondTrap();

		DiamondTrap &operator=(const DiamondTrap &tocopy);

		using ScavTrap::attack;
		void whoAmI(void);
} ;

#endif
