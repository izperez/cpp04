/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:22:36 by izperez           #+#    #+#             */
/*   Updated: 2025/03/25 12:46:16 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	const WAnimal* wmeta = new WAnimal();
	const WAnimal* wdog = new WCat();

	std::cout << wdog->getType() << " " << std::endl;
	wdog->makeSound();
	wmeta->makeSound();

	delete meta;
	delete j;
	delete i;
	delete wmeta;
	delete wdog;

	return (0);

}