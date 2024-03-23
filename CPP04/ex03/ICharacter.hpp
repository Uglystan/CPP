/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:24:42 by lgirault          #+#    #+#             */
/*   Updated: 2023/08/09 10:23:20 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class AMateria;
class ICharacter;

class ICharacter
{
	public:
		virtual ~ICharacter() {}
		// ICharacter&	operator=(ICharacter const& substitue){
		// 	(void)substitue;
		// 	std::cout << "TEST" << std::endl;
		// 	return (*this);
		// }
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif