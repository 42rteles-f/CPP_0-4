/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:48:49 by rteles-f          #+#    #+#             */
/*   Updated: 2023/11/27 15:26:31 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

class PhoneBook {
	private:
		int		keeper;
		Contact	contacts[8];

	public:
		PhoneBook();
		~PhoneBook();
		std::string	ask_input(const char *string);
		void		Add(void);
		void		Search(void);
} ;


#endif
