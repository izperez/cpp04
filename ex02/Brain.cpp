/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 12:33:12 by izperez           #+#    #+#             */
/*   Updated: 2025/03/25 13:11:52 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain constructor called!" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "";
}

Brain::~Brain(){
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain copy constructor called!" << std::endl;
	*this = src;
}

Brain& Brain::operator=(const Brain &src)
{
	if (this == &src)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	return (*this);
}

void	Brain::setIdea(int index, const std::string idea)
{
	if (index >= 0 && index < 100)
		ideas[index] = idea;
}

std::string Brain::getIdea (int index) const
{
	return (ideas[index]);
}

