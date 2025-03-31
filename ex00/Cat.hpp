/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 12:07:16 by izperez           #+#    #+#             */
/*   Updated: 2025/03/25 12:03:28 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_H
# define CAT_H

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		virtual ~Cat();
		Cat(const Cat &src);
		Cat &operator=(const Cat &src);
		virtual void	makeSound() const;
};

#endif