/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:57:38 by lgirault          #+#    #+#             */
/*   Updated: 2023/08/09 11:00:40 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	_type = "WrongCat";
	std::cout << "Constructor WrongCat called" << std::endl;
}

WrongCat::WrongCat(WrongCat const& substitue) : WrongAnimal()
{
	std::cout << "Consturctor copie WrongCat called" << std::endl;
	_type = substitue._type;
}

WrongCat&	WrongCat::operator=(WrongCat const& substitue)
{
	std::cout << "Operator assignement WrongCat called" << std::endl;
	if (this != &substitue)
	{
		_type = substitue._type;
	}
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "Destructor WrongCat called" << std::endl;
}