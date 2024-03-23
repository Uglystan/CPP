/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:12:52 by lgirault          #+#    #+#             */
/*   Updated: 2023/07/26 20:30:30 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class	ClapTrap
{
	public :
		ClapTrap(std::string const& name);
		ClapTrap(ClapTrap const& substitue);
		ClapTrap&	operator=(ClapTrap const& substitue);
		~ClapTrap(void);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		
	protected :
		std::string	_name;
		int	_hitPoints;
		int	_energyPoints;
		int	_attackDamage;
};

#endif