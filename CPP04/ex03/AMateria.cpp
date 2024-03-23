/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 14:18:16 by lgirault          #+#    #+#             */
/*   Updated: 2023/08/09 09:27:10 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*Constructeur*/
AMateria::AMateria(std::string const& type) : _type(type)
{
	//std::cout << "AMateria constructor called" << std::endl;
}

/*COnstructeur par copie*/
AMateria::AMateria(AMateria const& substitue)
{
	//std::cout << "AMateria copie constructor called" << std::endl;
	_type = substitue._type;
}

/*Operateur assignation*/
AMateria&	AMateria::operator=(AMateria const& substitue)
{
	//std::cout << "AMateria assignement operator called" << std::endl;
	if (this != &substitue)
	{
		_type = substitue._type;
	}
	return (*this);
}

AMateria::~AMateria(void)
{
	//std::cout << "AMateria destructor called" << std::endl;
}

std::string const&	AMateria::getType(void) const
{
	return (_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "Use Materia on" << target.getName() << std::endl;
}
