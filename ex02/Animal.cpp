/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 11:03:38 by izperez           #+#    #+#             */
/*   Updated: 2025/03/24 12:38:30 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal(): _type("Unknown"){
	std::cout << "\033[32m" << "AAnimal: " << this->_type << " created!" << "\033[0m" << std::endl;
}

AAnimal::~AAnimal(){
	std::cout << "\033[31m" << "AAnimal: " << this->_type << " destroyed!" << "\033[0m" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = src;
}

AAnimal &AAnimal::operator=(const AAnimal &src)
{
	std::cout << "AAnimal copy assigment operator" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

std::string AAnimal::getType() const
{
	return (this->_type);
}

