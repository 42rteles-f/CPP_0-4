/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 19:36:24 by rteles-f          #+#    #+#             */
/*   Updated: 2024/01/10 16:26:02 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream> 

class Weapon {
	private:
		std::string	type;

	public:
		Weapon(std::string type);
		~Weapon();
		const std::string&	getType(void);
		void				setType(std::string type);
} ;

#endif
