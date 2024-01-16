/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:21:31 by rteles-f          #+#    #+#             */
/*   Updated: 2024/01/15 11:34:57 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal {
	protected:
		std::string type;

	public:
		AAnimal();
		AAnimal(const AAnimal& tocopy);
		virtual ~AAnimal();

		AAnimal& operator=(const AAnimal& tocopy);

		virtual void		makeSound(void) const = 0;
		const std::string	getType(void) const;
} ;

#endif