/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:57:32 by lgirault          #+#    #+#             */
/*   Updated: 2023/07/26 20:02:52 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_nBitFrac = 8;

Fixed::Fixed() : _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const& substitue) : _rawBits(0)
{
	std::cout << "Copie constructor called" << std::endl;
	_rawBits = substitue.getRawBits();
	return ;
}


Fixed::~Fixed()
{
	std::cout << "Destructor Fixed called" << std::endl;
}

Fixed&	Fixed::operator=(Fixed const& substitue)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &substitue)
		this->_rawBits = substitue.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (_rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	_rawBits = raw;
}
/*---------------------------------EX01-------------------------------------*/

Fixed::Fixed(int const toFixedPoint) : _rawBits(0)
{
	std::cout << "Int constructor called" << std::endl;
	_rawBits = toFixedPoint << _nBitFrac;
}

Fixed::Fixed(float const toFixedPoint) : _rawBits(0)
{
	std::cout << "Float constructor called" << std::endl;
	/*En général, multiplier un nombre binaire par une puissance de 2 (2^n)
	est équivalent à effectuer un décalage de bits de n positions vers
	la gauche, ce qui est un moyen efficace de réaliser des multiplications
	par des puissances de 2 en binaire.*/
	_rawBits = (roundf(toFixedPoint * (1 << _nBitFrac)));//*255 reviens a decaler les bits de 7 position vers la gauche
}

float	Fixed::toFloat(void) const
{
	/*Diviser un nombre par 128 revient a decaler les bits de 8 position
	pour un nombre flottant c'est l'exposant qui change*/
	return ((float)_rawBits / (float)(1 << _nBitFrac));
}


int	Fixed::toInt(void) const
{
	return (_rawBits >> _nBitFrac);
}

std::ostream&	operator<<(std::ostream& flux, Fixed const& fixed)
{
	flux << fixed.toFloat();
	return (flux);
}
