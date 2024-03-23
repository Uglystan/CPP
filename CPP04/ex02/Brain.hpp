/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:06:34 by lgirault          #+#    #+#             */
/*   Updated: 2023/08/07 09:33:50 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class	Brain
{
	public :
		Brain(void);
		Brain(Brain const& substitue);
		Brain&	operator=(Brain const& substitue);
		~Brain(void);
		void	setIdeas(std::string idea, int index);
		std::string	getIdeas(int index) const;

	protected :
		std::string	_ideas[100];
	
};

#endif