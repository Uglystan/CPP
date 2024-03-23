/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:09:15 by lgirault          #+#    #+#             */
/*   Updated: 2023/08/02 17:18:53 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for(int i = 0; i < 4; i++)
		_stockMateria[i] = NULL;
	//std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const& substitue)
{
	for (int i = 0; i < 4; i++)
		_stockMateria[i] = substitue._stockMateria[i]->clone();
	//std::cout << "MateriaSource copie constructor called" << std::endl;
}

MateriaSource&	MateriaSource::operator=(MateriaSource const& substitue)
{
	if(this != &substitue)
	{
		for(int i = 0; i < 4; i++)
			delete _stockMateria[i];
		for(int i = 0; i < 4; i++)
			_stockMateria[i] = substitue._stockMateria[i]->clone();
	}
	return (*this);
	//std::cout << "MateriaSource assignement opertator called" << std::endl;
}

MateriaSource::~MateriaSource(void)
{
	for(int i = 0; i < 4; i++)
		delete _stockMateria[i];
	//std::cout << "MateriaSource destructor called" << std::endl;
}

void	MateriaSource::learnMateria(AMateria* m)
{
	int	i = 0;
	
	while (i < 4 && _stockMateria[i] != NULL)
		i++;
	if (i == 4)
		std::cout << "No place for new Materia" << std::endl;
	else
		_stockMateria[i] = m;
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	int	i  = 0;
	
	while (i < 4)
	{
		if (_stockMateria[i] != NULL && _stockMateria[i]->getType() == type)
			break;
		else
			i++;
	}
	if (i == 4)
	{
		std::cout << "No Materia for this type" << std::endl;
		return (NULL);
	}
	else
	{
		return (_stockMateria[i]->clone());
	}
}