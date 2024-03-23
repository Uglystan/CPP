/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:00:31 by lgirault          #+#    #+#             */
/*   Updated: 2023/07/27 10:52:07 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class	Cat : public Animal
{
	public :
		Cat(void);
		Cat(Cat const& substitue);
		Cat&	operator=(Cat const& substitue);
		virtual ~Cat(void);
		virtual void	makeSound(void) const;
};

#endif