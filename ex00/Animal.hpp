/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:22:32 by izperez           #+#    #+#             */
/*   Updated: 2025/03/25 11:59:37 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_H
# define ANIMAL_H

#include <iostream>
#include <string>

//virtual for polymorphism
class Animal
{
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &src);
		Animal &operator=(const Animal &src);
		virtual void	makeSound() const;
		virtual void	setType(std::string newType);
		std::string getType() const;

	protected:
		std::string _type;
	
};

#endif