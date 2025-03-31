/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 11:03:42 by izperez           #+#    #+#             */
/*   Updated: 2025/03/25 13:03:38 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"
# include "Cat.hpp"

int main()
{
	Dog thor;
	Cat neron;
	Dog mushu;

	neron.makeSound();
	thor.makeSound();
	neron.setIdea(0, "hello cat world");
	neron.setIdea(1, "hello cat world 2");
	thor.setIdea(0, "hello dog world");
	
	std::cout << neron.getIdea(0) << std::endl;
	std::cout << neron.getIdea(1) << std::endl;
	std::cout << thor.getIdea(0) << std::endl;
	mushu = thor;
	std::cout << mushu.getIdea(0) << std::endl;
	
	return (0);
}
