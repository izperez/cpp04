/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izperez <izperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 12:34:27 by izperez           #+#    #+#             */
/*   Updated: 2025/03/25 12:54:48 by izperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
private:
	std::string ideas[100];

public:
	Brain();
	~Brain();
	Brain(const Brain& src);
	Brain& operator=(const Brain& other);
	void setIdea(int index, const std::string idea);
	std::string getIdea(int index) const;
};

#endif
