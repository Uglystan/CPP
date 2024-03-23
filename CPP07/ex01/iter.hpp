/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:37:15 by lgirault          #+#    #+#             */
/*   Updated: 2023/11/23 14:32:43 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template<typename T>
void	fct(T & elem)/*Envoie de reference pour que la valeur soit mdifier et pas seulement copier*/
{
	elem++;
}

template<typename T>
void	fct2(T elem)
{
	std::cout << elem << std::endl;
}

template<typename T, typename Func>
void	iter(T *addr, int taille, Func func)
{
	for(int i = 0; i < taille; i++)
		func(addr[i]);
}


#endif