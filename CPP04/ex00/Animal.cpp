/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:52:28 by lgirault          #+#    #+#             */
/*   Updated: 2023/07/27 10:50:01 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Constructor Animal called" << std::endl;
}

Animal::Animal(Animal const& substitue)
{
	std::cout << "Constructor copie Animal called" << std::endl;
	_type = substitue._type;
}

Animal::~Animal(void)
{
	std::cout << "Destructor Animal called" << std::endl;
}

Animal&	Animal::operator=(Animal const& substitue)
{
	std::cout << "Assignement Animal operator called" << std::endl;
	if (this != &substitue)
	{
		_type = substitue._type;
	}
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal sound" << std::endl;
}

std::string const&	Animal::getType(void) const
{
	return (_type);
}