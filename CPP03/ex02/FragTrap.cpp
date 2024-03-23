/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:56:31 by lgirault          #+#    #+#             */
/*   Updated: 2023/07/28 09:01:00 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const& name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const& substitue) : ClapTrap(substitue)
{
	std::cout << "Constructor copie FragTrap called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor FragTrap called" << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const& substitue)
{
	std::cout << "Assignement operator FragTrap called" << std::endl;
	if (this != &substitue)
	{
		_name = substitue._name;
		_hitPoints = substitue._hitPoints;
		_energyPoints = substitue._energyPoints;
		_attackDamage = substitue._attackDamage;
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << _name << " say : High fives ?" << std::endl;
}