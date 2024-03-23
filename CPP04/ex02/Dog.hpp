/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:22:27 by lgirault          #+#    #+#             */
/*   Updated: 2023/07/28 11:28:22 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
	public :
		Dog(void);
		Dog(Dog const& substitue);
		Dog&	operator=(Dog const& substitue);
		virtual ~Dog(void);
		virtual void	makeSound(void) const;

	private :
		Brain	*_cerveau;
};

#endif