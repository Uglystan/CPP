/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 11:20:18 by lgirault          #+#    #+#             */
/*   Updated: 2023/08/06 13:26:21 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <iostream>
#include <exception>

template<typename T>
class	Array
{
	public :
		Array(void);
		Array(Array const& substitue);
		Array(unsigned int n);
		~Array(void);
		Array&	operator=(Array const& substitue);
		T&	operator[](unsigned int index) const;	
		unsigned int	size() const;

	private :
		T	*_array;
		unsigned int	_size;
		class	InvalidINdexException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
};

#include "Array.tpp"

#endif