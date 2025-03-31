/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 11:03:40 by izperez           #+#    #+#             */
/*   Updated: 2025/03/25 13:08:31 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_H
# define ANIMAL_H

#include <iostream>
#include <string>
#include <ostream>
#include "Brain.hpp"

class Animal
{
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &src);
		Animal &operator=(const Animal &src);
		virtual void	makeSound() const;
		std::string getType() const;

	protected:
		std::string _type;
		Brain *brain;
	
};

#endif