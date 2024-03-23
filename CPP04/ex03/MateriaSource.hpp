/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:50:35 by lgirault          #+#    #+#             */
/*   Updated: 2023/08/01 09:58:28 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	public :
		MateriaSource(void);
		~MateriaSource(void);
		MateriaSource(MateriaSource const& subistue);
		MateriaSource&	operator=(MateriaSource const& subistue);
		void	learnMateria(AMateria *m);
		AMateria*	createMateria(std::string const& type);

	private :
		AMateria*	_stockMateria[4];
};

#endif