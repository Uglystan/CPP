/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:12:21 by lgirault          #+#    #+#             */
/*   Updated: 2023/08/02 08:55:23 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	Frag("Frag");

	std::cout << std::endl;

	Frag.attack("Paul");
	Frag.highFivesGuys();
	Frag.takeDamage(1);
	Frag.beRepaired(1);
	
	return (0);
}