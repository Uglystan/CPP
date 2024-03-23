/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:45:42 by lgirault          #+#    #+#             */
/*   Updated: 2023/07/25 14:11:55 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public : 		
		FragTrap(std::string const& name);
		FragTrap(FragTrap const& substitue);
		FragTrap&	operator=(FragTrap const& substitue);
		~FragTrap(void);
		void	highFivesGuys(void);
};

#endif