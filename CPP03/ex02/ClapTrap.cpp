/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:17:38 by lgirault          #+#    #+#             */
/*   Updated: 2023/07/28 09:17:48 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const& name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Constructor ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& substitue) : _name(substitue._name), _hitPoints(substitue._hitPoints), _energyPoints(substitue._energyPoints), _attackDamage(substitue._attackDamage)
{
	std::cout << "Constructor copie ClapTrap called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const& substitue)
{
	if (this != &substitue)
	{
		std::cout << "Assignement operator ClapTrap called" << std::endl;
		_name = substitue._name;
		_hitPoints = substitue._hitPoints;
		_energyPoints = substitue._energyPoints;
		_attackDamage = substitue._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor ClapTrap called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints -= 1;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage !" << " / energy points : " << _energyPoints << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " don't have enough energy points !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints - amount > 0)
	{
		std::cout << "ClapTrap " << _name << " take " << amount << " damage hit points : " << _hitPoints - amount << std::endl;
		_hitPoints -= amount;	
	}
	else
	{
		std::cout << "ClapTrap" << _name << " is dead hit points : 0" << std::endl;
		_hitPoints = 0;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints -= 1;
		_hitPoints += amount;
		std::cout << "ClapTrap " << _name << " repaired " << amount << " hit points : " << _hitPoints << " / energy points : " << _energyPoints << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " don't have enough energy points !" << std::endl;
}