/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:56:10 by lgirault          #+#    #+#             */
/*   Updated: 2023/07/27 10:58:42 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class	WrongAnimal
{
	public :
		WrongAnimal();
		~WrongAnimal(void);
		WrongAnimal(WrongAnimal const& substitue);
		WrongAnimal&	operator=(WrongAnimal const& substitue);
		void	makeSound(void) const;
		std::string const&	getType(void) const;

	protected :
		std::string	_type;
};

#endif