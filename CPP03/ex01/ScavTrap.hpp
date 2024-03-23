/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:26:08 by lgirault          #+#    #+#             */
/*   Updated: 2023/08/01 14:27:01 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public :
		ScavTrap(std::string const& name);
		ScavTrap(ScavTrap const& substitue);
		ScavTrap&	operator=(ScavTrap const& substitue);
		~ScavTrap(void);
		void	attack(const std::string& target);
		void	guardGate(void);
};

#endif