/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:25:11 by rteles-f          #+#    #+#             */
/*   Updated: 2024/01/15 11:28:17 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat {
    private:
        std::string type;

    public:
        Cat();
        Cat(const Cat& tocopy);
        // Cat();
        ~Cat();

        Cat& operator=(const Cat& tocopy);

        void    makeSound() const;
}

#endif