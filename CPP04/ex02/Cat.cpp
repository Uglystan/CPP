/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:04:32 by lgirault          #+#    #+#             */
/*   Updated: 2023/08/07 09:32:24 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Constructor Cat called" << std::endl;
	_type = "Cat";
	_cerveau = new Brain();
}

Cat::Cat(Cat const& substitue) : Animal()
{
	std::cout << "Consturctor copie Cat called" << std::endl;
	_type = substitue._type;
	_cerveau = new Brain();
	for (int i = 0; i < 100; i++)
		_cerveau->setIdeas(substitue._cerveau->getIdeas(i), i);
}

Cat&	Cat::operator=(Cat const& substitue)
{
	std::cout << "Operator assignement Cat called" << std::endl;
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

Cat::~Cat(void)
{
	delete _cerveau;
	std::cout << "Destructor Cat called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}