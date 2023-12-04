/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:56:38 by rteles-f          #+#    #+#             */
/*   Updated: 2023/12/04 14:29:03 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <map>

# define HARLS_CASES 5

class Harl {
	private:
		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);
		void 		invalidLevel(void);
		const char	*cases[HARLS_CASES];

	public:
		Harl();
		~Harl();
		void complain(std::string level);
} ;

#endif