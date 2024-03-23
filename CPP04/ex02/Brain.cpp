/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:17:24 by lgirault          #+#    #+#             */
/*   Updated: 2023/08/07 09:33:57 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Constructor Brain called" << std::endl;
	for(int i = 0; i < 100; i++)
		_ideas[i] = std::string();
}

Brain::Brain(Brain const& substitue)
{
	std::cout << "Constructor copie Brain called" << std::endl;
	 for(int i = 0; i <= 100; i++)
	 	_ideas[i] = substitue._ideas[i];
}

Brain&	Brain::operator=(Brain const& substitue)
{
	if (this != &substitue)
	{
		 for(int i = 0; i <= 100; i++)
		 	_ideas[i] = substitue._ideas[i];
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Destructor Brain called" << std::endl;
}

void	Brain::setIdeas(std::string idea, int index)
{
	_ideas[index] = idea;
}

std::string	Brain::getIdeas(int index) const
{
	return (_ideas[index]);
}