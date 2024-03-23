/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:12:21 by lgirault          #+#    #+#             */
/*   Updated: 2023/08/02 08:54:40 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	Diam("Diam");
	
	Diam.whoAmI();
	Diam.beRepaired(1);
	Diam.attack("Lucas");//Ici on utilisera de base la fonction de ScavTrap
	Diam.ClapTrap::attack("Paul");//Ici si on souhaite grace a l'operateur de resolution de portee on peut utiliser attck de ClapTrap
	Diam.guardGate();
	Diam.highFivesGuys();
	return (0);
}