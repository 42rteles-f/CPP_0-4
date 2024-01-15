/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 10:12:08 by rteles-f          #+#    #+#             */
/*   Updated: 2024/01/15 10:52:04 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap: public ClapTrap {
	private:
		std::string	name;

	public:
		FragTrap();
		FragTrap(const FragTrap &tocopy);
		FragTrap(std::string name);
		~FragTrap();

		FragTrap &operator=(const FragTrap &tocopy);

		void highFivesGuys(void);
} ;

#endif
