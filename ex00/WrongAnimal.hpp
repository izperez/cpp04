/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 12:14:48 by izperez           #+#    #+#             */
/*   Updated: 2025/03/25 12:01:09 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>
#include <string>

class WAnimal
{
	public:
		WAnimal();
		virtual ~WAnimal();
		WAnimal(const WAnimal &src);
		WAnimal &operator=(const WAnimal &src);
		void	makeSound() const;
		std::string getType() const;

	protected:
		std::string _type;
	
};

#endif