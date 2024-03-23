/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:38:16 by lgirault          #+#    #+#             */
/*   Updated: 2023/08/07 09:31:13 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Constructor Dog called" << std::endl;
	_type = "Dog";
	_cerveau = new Brain();
}

Dog::Dog(Dog const& substitue) : Animal()
{
	std::cout << "Constructor copie Dog called" << std::endl;
	_type = substitue._type;
	_cerveau = new Brain();
	for (int i = 0; i < 100; i++)
		_cerveau->setIdeas(substitue._cerveau->getIdeas(i), i);
}

Dog&	Dog::operator=(Dog const& substitue)
{
	std::cout << "Operator assignement Dog called" << std::endl;
	if (this != &substitue)
	{
		_type = substitue._type;
		delete _cerveau;
		_cerveau = new Brain();
		for (int i = 0; i < 100; i++)
			_cerveau->setIdeas(substitue._cerveau->getIdeas(i), i);
	}
	return (*this);
}

Dog::~Dog(void)
{
	delete _cerveau;
	std::cout << "Destructor Dog called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Wouaf" << std::endl;
}