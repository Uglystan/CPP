/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:12:21 by lgirault          #+#    #+#             */
/*   Updated: 2023/07/28 09:13:41 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Paul("Paul");
	ClapTrap	Jack("Jack");
	ClapTrap	Paul2(Paul);

	Paul2 = Jack;
	std::cout << std::endl;	
	
	Paul.attack("Jack");
	Jack.takeDamage(1);
	Jack.beRepaired(1);

	return (0);
}