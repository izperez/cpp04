/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 12:14:56 by izperez           #+#    #+#             */
/*   Updated: 2025/03/24 12:29:22 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WAnimal::WAnimal(): _type("Unknown"){
	std::cout << "\033[32m" << "Wrong Animal: " << this->_type << " created!" << "\033[0m" << std::endl;
}

WAnimal::~WAnimal(){
	std::cout << "\033[31m" << "Wrong Animal: " << this->_type << " destroyed!" << "\033[0m" << std::endl;
}

WAnimal::WAnimal(const WAnimal &src)
{
	std::cout << "WAnimal copy constructor called" << std::endl;
	*this = src;
}

WAnimal &WAnimal::operator=(const WAnimal &src)
{
	std::cout << "WAnimal copy assigment operator" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

std::string WAnimal::getType() const
{
	return (this->_type);
}

void WAnimal::makeSound() const
{
	std::cout << "Wrong Animal sound!" << std::endl;
}
