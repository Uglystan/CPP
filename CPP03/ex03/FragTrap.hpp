/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:45:42 by lgirault          #+#    #+#             */
/*   Updated: 2023/07/28 11:09:28 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

/*Ici il est important dans le cas de l'heritage diamant de mettre virtual
public ClapTrap car on indique que frag herite de Clap donc pour Diamond
le compilateur saura exectement comment gerer pour eviter les problemes*/
class	FragTrap : virtual public ClapTrap
{
	public : 		
		FragTrap(std::string const& name);
		FragTrap(FragTrap const& substitue);
		FragTrap&	operator=(FragTrap const& substitue);
		~FragTrap(void);
		void	highFivesGuys(void);
};

#endif