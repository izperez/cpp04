/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 11:03:40 by izperez           #+#    #+#             */
/*   Updated: 2025/03/25 13:08:31 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	Animal_H
# define Animal_H

#include <iostream>
#include <string>
#include <ostream>
#include "Brain.hpp"

class AAnimal
{
	public:
		AAnimal();
		virtual ~AAnimal();
		AAnimal(const AAnimal &src);
		AAnimal &operator=(const AAnimal &src);
		virtual void	makeSound() const = 0;
		std::string getType() const;

	protected:
		std::string _type;
		Brain *brain;
	
};

#endif