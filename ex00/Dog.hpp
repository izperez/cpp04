/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 12:07:02 by izperez           #+#    #+#             */
/*   Updated: 2025/03/25 12:09:59 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_H
# define DOG_H

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog &src);
		Dog &operator=(const Dog &src);
		virtual void	makeSound() const;
};

#endif