/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaCure.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 14:44:27 by lgirault          #+#    #+#             */
/*   Updated: 2023/08/09 08:46:59 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIACURE_HPP
#define MATERIACURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class MateriaCure : public AMateria
{
	private:
		
	public:
		MateriaCure(void);
		MateriaCure(MateriaCure const& substitue);
		MateriaCure&	operator=(MateriaCure const& substitue);
		virtual ~MateriaCure(void);
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif