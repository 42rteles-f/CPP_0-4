/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles-f <rteles-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:44:18 by rteles-f          #+#    #+#             */
/*   Updated: 2024/01/16 21:21:51 by rteles-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	// delete j; //should not create a leak
	// delete i;
	}
	{
	Animal	*zoo[20] = {0};
	(void)zoo;
	for(int i = 0; i < 10; ++i)
		zoo[i] = new Dog();
	for(int i = 10; i < 20; ++i)
		zoo[i] = new Cat();
	for(int i = 0; i < 20; ++i)
		delete zoo[i];
	}
	{
	Cat *a = new Cat;
	Cat b;
	Cat c;
	b = *a;
	delete a;
	c = b;
	}
	

	return 0;
}
