/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:38:53 by lgirault          #+#    #+#             */
/*   Updated: 2023/08/01 10:22:43 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "MateriaCure.hpp"
#include "MateriaIce.hpp"
#include "AMateria.hpp"

class Ametria;

class	Character : public ICharacter
{
	public :
		Character(std::string name);
		Character(Character const& substitue);
		Character&	operator=(Character const& substitue);
		~Character(void);
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

	private :
		AMateria*	_inventory[4];
		std::string	_name;
		
	
};

#endif