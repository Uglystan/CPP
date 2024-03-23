/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:00:31 by lgirault          #+#    #+#             */
/*   Updated: 2023/08/07 09:39:17 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

/*Ici il est de convention de mettre virtual dans la class enfant les memes
fonction qui ont ete mise en virtual dans la classe parent ca n'a pas d'impact
sur le code mais c'est tout simplement plus lisible*/
class	Cat : public Animal
{
	public :
		Cat(void);
		Cat(Cat const& substitue);
		Cat&	operator=(Cat const& substitue);
		virtual ~Cat(void);
		virtual void	makeSound(void) const;

	private :
		Brain	*_cerveau;
};

#endif