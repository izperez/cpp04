/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 12:15:13 by izperez           #+#    #+#             */
/*   Updated: 2025/03/24 12:30:39 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGCAT_H
# define WRONGCAT_H

#include "WrongAnimal.hpp"

class WCat : public WAnimal
{
	public:
		WCat();
		virtual ~WCat();
		WCat(const WCat &src);
		WCat &operator=(const WCat &src);
		void	makeSound() const;
};

#endif