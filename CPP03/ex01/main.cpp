/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:12:21 by lgirault          #+#    #+#             */
/*   Updated: 2023/08/02 14:26:53 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

/*Quand on instancie une classe herite c'est en premier le constructeur de la
classe parent aui est appele il initialise les variables propre au parent et
ensuite il passe le relais au constructeur de la classe enfant cela garantie
que chaque classe parent est bien initialise avant que le constructeur enfant
n'intervienne*/
int	main(void)
{
	ScavTrap	Scav("Scav");
	
	Scav.attack("Paul");
	Scav.guardGate();
	Scav.takeDamage(1);
	Scav.beRepaired(1);
	
	return (0);
}
/*Les destructeur sont appele dans le sens inverse aprce que le destructeur de
la classe parent n'a pas acces au donne de la classe enfant par exemple dans la
classe enfant il pourrait y'avoir une variable d'alloue dynamiquement qui 
n'existeraient pas dans la classe parent et si c'etait le destructeur de la 
classe parent qui etait appele le premier il ne pourrait detruire et nettoye
que les variables auxquels il aurait acces*/