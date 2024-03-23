/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:15:51 by lgirault          #+#    #+#             */
/*   Updated: 2023/07/20 08:24:52 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*Zombie::newZombie(std::string name)/*Allocation dynamique pour utiliser le Zombie en dehors de la fonction donc repuerer son adresse sinon en sortie de fonction il est supprime*/
{
	Zombie *zombie;

	zombie = new Zombie(name);/*Malloc de zombie_ptr en utilisant le constructeur*/
	return (zombie);
}

