/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 12:07:21 by izperez           #+#    #+#             */
/*   Updated: 2025/03/25 12:10:48 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	_type = "Cat";
	std::cout << "\033[32m" << "Cat: " << this->_type << " created!" << "\033[0m" << std::endl;
}

Cat::~Cat() {
	std::cout << "\033[31m" << "Cat: " << this->_type << " destroyed!" << "\033[0m" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat &Cat::operator=(const Cat &src)
{
	std::cout << "Cat copy assigment operator" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}
