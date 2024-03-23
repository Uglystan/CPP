/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:56:45 by lgirault          #+#    #+#             */
/*   Updated: 2023/08/09 10:57:23 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	public :
		WrongCat(void);
		WrongCat(WrongCat const& substitue);
		WrongCat&	operator=(WrongCat const& substitue);
		void	makeSound(void) const;
		~WrongCat(void);
};

#endif