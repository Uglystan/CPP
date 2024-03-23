/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:00:18 by lgirault          #+#    #+#             */
/*   Updated: 2023/08/02 14:42:02 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string const& name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 30;
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& substitue) : ClapTrap(substitue), ScavTrap(substitue), FragTrap(substitue)
{
	_name = substitue._name;
	std::cout << "Constructor copie DiamondTrap called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Destructor DiamondTrap called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const& substitue)
{
	std::cout << "Assignement operator DiamondTrap called" << std::endl;
	if (this != &substitue)
	{
		_name = substitue._name;
		_hitPoints = substitue._hitPoints;
		_energyPoints = substitue._energyPoints;
		_attackDamage = substitue._attackDamage;
	}
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "Name : " << _name << " Clap_name : " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
}