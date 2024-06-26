/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:28:56 by lgirault          #+#    #+#             */
/*   Updated: 2023/07/26 20:10:18 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;

	std::cout << std::endl;
	
	if (a > b)
		std::cout << "a plus grand" << std::endl;
	if (a < b)
		std::cout << "a plus petit" << std::endl;
	if (a >= b)
		std::cout << "a plus grand ou egal" << std::endl;
	if (a <= b)
		std::cout << "a plus petit ou egal" << std::endl;
	if (a == b)
		std::cout << "a egal" << std::endl;
	if (a != b)
		std::cout << "a different" << std::endl;
	
	std::cout << std::endl;

	std::cout << b << std::endl;
	std::cout << b + b << std::endl;
	std::cout << b - b<< std::endl;
	std::cout << b  * b << std::endl;
	std::cout << b / b << std::endl;

	std::cout << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;

	return 0;
}