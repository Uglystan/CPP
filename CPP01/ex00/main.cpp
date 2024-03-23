/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:52:51 by lgirault          #+#    #+#             */
/*   Updated: 2023/07/19 19:10:08 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *ptr = NULL;

	ptr->randomChump("Test");
	ptr = ptr->newZombie("Lucas");
	ptr->announce();
	delete ptr;
}