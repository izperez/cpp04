/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 12:07:16 by izperez           #+#    #+#             */
/*   Updated: 2025/03/25 13:09:05 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_H
# define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		~Cat();
		Cat(const Cat &src);
		Cat &operator=(const Cat &src);
		virtual void	makeSound() const;
		std::string	getIdea(int i) const;
		void setIdea(int index, std::string idea) ;
	private:
		Brain *brain;
};

#endif