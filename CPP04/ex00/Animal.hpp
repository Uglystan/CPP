/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:49:14 by lgirault          #+#    #+#             */
/*   Updated: 2023/07/27 10:52:15 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class	Animal
{
	public :
		Animal();
		virtual ~Animal(void);
		Animal(Animal const& substitue);
		Animal&	operator=(Animal const& substitue);
		virtual void	makeSound(void) const;
		std::string const&	getType(void) const;

	protected :
		std::string	_type;
};

#endif