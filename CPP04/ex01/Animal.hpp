/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:49:14 by lgirault          #+#    #+#             */
/*   Updated: 2023/08/07 09:39:37 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

/*Le fait de mettre la fonction makeSound en virtual dans la classe fait en sorte
que les class enfant pourront redefinir cette fonction et au moment de l'execution
l'ordinateur aura la possibilite de choisir mais il faut note que pour pouvoir choisir
la classe doit etre stocke dans un pointeur de type de la classe mere*/
class	Animal
{
	public :
		Animal();
		/*On notera qu'ici il est important de mettre le destructeur en
		virtual pour appeler aussi le destructeur des classes derivee
		au moment de la destruction exemple si on ne le fait pas on aura
		bien la destruction de la classe Animal mais pas de la class
		Cat ou Dog si c'etait un objet de cette class*/
		virtual ~Animal(void);
		Animal(Animal const& substitue);
		Animal&	operator=(Animal const& substitue);
		virtual void	makeSound(void) const;
		std::string const&	getType(void) const;

	protected :
		std::string	_type;
};

#endif