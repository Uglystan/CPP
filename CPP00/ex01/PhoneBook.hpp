/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:21:31 by lgirault          #+#    #+#             */
/*   Updated: 2023/07/19 14:48:14 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "Contact.hpp"

class	PhoneBook
{
	private :
		int	_index;
		Contact	_tabContact[8];
		std::string const	_fillInfo(std::string question) const;
		void	_printTruncInfo(std::string strInfo) const;
		void	_printInfo(Contact const& contact) const;

	public :
		PhoneBook();
		~PhoneBook();
		void	add(void);
		void	search(void) const;
};

#endif