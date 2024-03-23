/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:57:32 by lgirault          #+#    #+#             */
/*   Updated: 2023/12/07 11:43:03 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_nBitFrac = 8;

Fixed::Fixed() : _rawBits(0)
{
	return;
}

Fixed::Fixed(Fixed const& substitue) : _rawBits(0)
{
	_rawBits = substitue.getRawBits();
	return ;
}


Fixed::~Fixed()
{
}

Fixed&	Fixed::operator=(Fixed const& substitue)
{
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
	_rawBits = toFixedPoint << _nBitFrac;
}

Fixed::Fixed(float const toFixedPoint) : _rawBits(0)
{
	/*En général, multiplier un nombre binaire par une puissance de 2 (2^n)
	est équivalent à effectuer un décalage de bits de n positions vers
	la gauche, ce qui est un moyen efficace de réaliser des multiplications
	par des puissances de 2 en binaire.*/
	_rawBits = (roundf(toFixedPoint * (1 << _nBitFrac)));//*128 reviens a decaler les bits de 7 position vers la gauche
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

/*---------------------------------EX02-------------------------------------*/

bool	Fixed::operator>(Fixed const& b) const
{
	return (this->_rawBits > b._rawBits);
}

bool	Fixed::operator<(Fixed const& b) const
{
	return (this->_rawBits < b._rawBits);
}

bool	Fixed::operator>=(Fixed const& b) const
{
	return (this->_rawBits >= b._rawBits);
}

bool	Fixed::operator<=(Fixed const& b) const
{
	return (this->_rawBits <= b._rawBits);
}

bool	Fixed::operator==(Fixed const& b) const
{
	return (this->_rawBits == b._rawBits);
}

bool	Fixed::operator!=(Fixed const& b) const
{
	return (this->_rawBits != b._rawBits);
}

Fixed	Fixed::operator+(Fixed const& b) const
{
	Fixed	result;
	result._rawBits = this->_rawBits + b._rawBits;
	return (result);
}

Fixed	Fixed::operator-(Fixed const& b) const
{
	Fixed	result;
	result._rawBits = this->_rawBits - b._rawBits;
	return (result);
}

Fixed	Fixed::operator*(Fixed const& b) const
{
	return (this->toFloat() * b.toFloat());
}

Fixed	Fixed::operator/(Fixed const& b) const
{
	if (this->_rawBits != 0 && b._rawBits != 0)
		return (this->toFloat() / b.toFloat());
	else
	{
		std::cout << "Can't divide by 0" << std::endl;
		return (*this);
	}
}

Fixed&	Fixed::operator++(void)//prefixe
{
	_rawBits++;
	return (*this);
}

Fixed const	Fixed::operator++(int)//postfixe
{
	Fixed copie(*this);
	this->_rawBits++;
	return (copie);
}

Fixed& Fixed::operator--(void)
{
	this->_rawBits--;
	return (*this);
}

Fixed const	Fixed::operator--(int)
{
	Fixed	copie(*this);
	copie._rawBits--;
	return (copie);
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	return ((a < b) ? a : b);
}

Fixed const&	Fixed::min(Fixed const& a, Fixed const& b)
{
	return ((a < b) ? a : b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	return ((a < b) ? b : a);
}

Fixed const&	Fixed::max(Fixed const& a, Fixed const& b)
{
	return ((a < b) ? b : a);
}
