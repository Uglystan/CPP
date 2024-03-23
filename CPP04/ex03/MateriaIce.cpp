/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaIce.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:22:40 by lgirault          #+#    #+#             */
/*   Updated: 2023/08/02 17:18:42 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaIce.hpp"

MateriaIce::MateriaIce(void) : AMateria("ice")
{
	//std::cout << "MateriaIce constructor called" << std::endl;
}

MateriaIce::MateriaIce(MateriaIce const& substitue) : AMateria(substitue)
{
	//std::cout << "MateriaIce copie constructor called" << std::endl;
}

MateriaIce&	MateriaIce::operator=(MateriaIce const& substitue)
{
	if (this != &substitue)
	{
		_type = substitue._type;
	}
	return (*this);
}

MateriaIce::~MateriaIce(void)
{
	//std::cout << "MateriaIce destructor called" << std::endl;
}

AMateria*	MateriaIce::clone(void) const
{
	AMateria *ptr_clone = new MateriaIce(*this);
	return (ptr_clone);
}

void	MateriaIce::use(ICharacter& target)
{
	std::cout << _type << " : *shoots an ice bolt at " << target.getName() << "*" << std::endl;
}