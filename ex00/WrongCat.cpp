/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 12:15:06 by izperez           #+#    #+#             */
/*   Updated: 2025/03/25 12:11:30 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WCat::WCat(){
	_type = "Wrong Cat";
	std::cout << "\033[32m" << "Cat: " << this->_type << " created!" << "\033[0m" << std::endl;
}

WCat::~WCat(){
	std::cout << "\033[31m" << "Cat: " << this->_type << " destroyed!" << "\033[0m" << std::endl;
}

WCat::WCat(const WCat &src) : WAnimal(src)
{
	std::cout << "WCat copy constructor called" << std::endl;
	*this = src;
}

WCat &WCat::operator=(const WCat &src)
{
	std::cout << "WCat copy assigment operator" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

void WCat::makeSound() const
{
	std::cout << "Wrong Cat Sound" << std::endl;
}