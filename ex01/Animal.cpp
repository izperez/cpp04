/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 11:03:38 by izperez           #+#    #+#             */
/*   Updated: 2025/03/24 12:38:30 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("Unknown"){
	std::cout << "\033[32m" << "Animal: " << this->_type << " created!" << "\033[0m" << std::endl;
}

Animal::~Animal(){
	std::cout << "\033[31m" << "Animal: " << this->_type << " destroyed!" << "\033[0m" << std::endl;
}

Animal::Animal(const Animal &src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal &Animal::operator=(const Animal &src)
{
	std::cout << "Animal copy assigment operator" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "Animal " << _type << " makes generic sound!" << std::endl;
}

std::string Animal::getType() const
{
	return (this->_type);
}

