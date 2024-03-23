/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 11:39:59 by lgirault          #+#    #+#             */
/*   Updated: 2023/08/05 10:57:23 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
/*On utilise le static_cast pour caster des types de meme famille comme des 
ints en floats ou en char ou en double et reciproquement*/
int main(int argc, char **argv)
{
	if ( argc == 2)
	{
		ScalarConverter::convert(argv[1]);
	}
	return (0);
}