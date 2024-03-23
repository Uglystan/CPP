/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaCure.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 14:52:00 by lgirault          #+#    #+#             */
/*   Updated: 2023/08/02 17:18:35 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaCure.hpp"
#include "ICharacter.hpp"

MateriaCure::MateriaCure(void) : AMateria("cure")
{
	//std::cout << "MateriaCure constructor called" << std::endl;
}

MateriaCure::MateriaCure(MateriaCure const& substitue) : AMateria(substitue)
{
	//std::cout << "MateriaCure copie constructor called" << std::endl;
}

MateriaCure&	MateriaCure::operator=(MateriaCure const& substitue)
{
	if (this != &substitue)
	{
		_type = substitue._type;
	}
	return (*this);
}

MateriaCure::~MateriaCure(void)
{
	//std::cout << "MateriaCure destructor called" << std::endl;
}

AMateria*	MateriaCure::clone(void) const
{
	AMateria *ptr_clone = new MateriaCure(*this);
	return (ptr_clone);
}

void	MateriaCure::use(ICharacter& target)
{
	std::cout << _type << " : * heals " << target.getName() << "'s wounds *" << std::endl;
}