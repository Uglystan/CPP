/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:28:04 by lgirault          #+#    #+#             */
/*   Updated: 2023/07/20 08:40:41 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*ptr = NULL;

	ptr = ptr->zombieHorde(10, "Test");
	for(int i = 0; i < 10; i++)
		ptr[i].announce();
	delete[] ptr;
}