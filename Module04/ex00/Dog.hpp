/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:26:25 by rteles-f          #+#    #+#             */
/*   Updated: 2024/01/15 11:28:03 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog: public Animal {
    private:
        std::string type;

    public:
        Dog();
        Dog(const Dog& tocopy);
        // Dog();
        ~Dog();

        Dog& operator=(const Dog& tocopy);

        void    makeSound() const;
}

#endif