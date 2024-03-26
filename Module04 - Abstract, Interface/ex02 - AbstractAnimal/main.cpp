/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:44:18 by rteles-f          #+#    #+#             */
/*   Updated: 2024/01/16 21:27:59 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	const AAnimal* first = new Dog();
	const AAnimal* second = new Cat();
	AAnimal	third;
	Cat fourth;
	Dog fifth;
	delete first; //should not create a leak
	delete second;
	return 0;

}
