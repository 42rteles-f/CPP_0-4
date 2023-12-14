/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:30:02 by rteles-f          #+#    #+#             */
/*   Updated: 2023/05/23 15:37:48 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	private:
		static const int	fractional = 8;
		int					fixed;

	public:
		Fixed();
		Fixed(const Fixed& tocopy);
		~Fixed();

		int	getRawBits(void) const;
		void setRawBits(int const raw);

		Fixed& operator=(const Fixed &tocopy);
} ;

#endif
