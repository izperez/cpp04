/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 12:07:10 by izperez           #+#    #+#             */
/*   Updated: 2025/03/25 12:51:13 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	_type = "Dog";
	this->brain = new Brain();
	std::cout << "\033[32m" << "Dog: " << this->_type << " created!" << "\033[0m" << std::endl;
}

Dog::~Dog(){
	std::cout << "\033[31m" << "Dog: " << this->_type << " destroyed!" << "\033[0m" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "Dog copy assigment operator" << std::endl;
	if (this != &src)
		this->_type = src._type;
	brain = new Brain(*src.brain);
	for (int i = 0; i < 100; i++) {
		this->brain->setIdea(i, src.brain->getIdea(i));
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Wof Wof" << std::endl;
}

std::string	Dog::getIdea(int i) const
{
	return this->brain->getIdea(i);
}

void	Dog::setIdea(int i, std::string idea)
{
	this->brain->setIdea(i, idea);
}