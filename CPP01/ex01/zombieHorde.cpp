/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:29:03 by lgirault          #+#    #+#             */
/*   Updated: 2023/07/20 08:36:42 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*Zombie::zombieHorde(int N, std::string name)
{
	Zombie	*horde_zombie;

	horde_zombie = new Zombie[N];
	for(int i = 0; i < N; i++)
		horde_zombie[i]._name = name;
	return (horde_zombie);
}