/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:04:32 by lgirault          #+#    #+#             */
/*   Updated: 2023/07/27 10:50:07 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	_type = "Cat";
	std::cout << "Constructor Cat called" << std::endl;
}

Cat::Cat(Cat const& substitue) : Animal()
{
	std::cout << "Consturctor copie Cat called" << std::endl;
	_type = substitue._type;
}

Cat&	Cat::operator=(Cat const& substitue)
{
	std::cout << "Operator assignement Cat called" << std::endl;
	if (this != &substitue)
	{
		_type = substitue._type;
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Destructor Cat called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}