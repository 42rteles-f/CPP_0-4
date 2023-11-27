/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:35:51 by rteles-f          #+#    #+#             */
/*   Updated: 2023/11/27 14:34:48 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact {
	private:
		bool		active;
		std::string	name;
		std::string	last_name;
		std::string	nickname;
		std::string	secret;
		std::string	number;

		void	table_print(std::string string);

	public:
		Contact();
		~Contact();
		bool	isActive();
		void	MiniPrint(int index);
		void	FullPrint(void);
		void	Update(std::string secret, std::string number,
			std::string nickname, std::string last_name, std::string name);
} ;

std::string	ask_input(const char *string);

#endif