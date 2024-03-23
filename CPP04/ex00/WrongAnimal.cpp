/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:55:32 by lgirault          #+#    #+#             */
/*   Updated: 2023/07/27 10:55:59 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << "Constructor WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& substitue)
{
	std::cout << "Constructor copie WrongAnimal called" << std::endl;
	_type = substitue._type;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Destructor WrongAnimal called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const& substitue)
{
	std::cout << "Assignement WrongAnimal operator called" << std::endl;
	if (this != &substitue)
	{
		_type = substitue._type;
	}
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sound" << std::endl;
}

std::string const&	WrongAnimal::getType(void) const
{
	return (_type);
}