/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:48:56 by lgirault          #+#    #+#             */
/*   Updated: 2023/08/05 17:18:21 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <string>
#include <iostream>

template <typename T>
void	swap(T& a, T& b)
{	
	T temp;
	
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T	min(T a, T b)
{
	return (b <= a ? b : a);
}
template <typename T>
T	max(T a, T b)
{
	return (b >= a ? b : a);
}

#endif