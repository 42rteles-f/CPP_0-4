/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:21:31 by rteles-f          #+#    #+#             */
/*   Updated: 2024/01/15 11:34:57 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
    private:
        std::string type;

    public:
        Animal();
        Animal(const Animal& tocopy);
        // Animal();
        ~Animal();

        Animal& operator=(const Animal& tocopy);

        virtual void    makeSound() const;
}

#endif