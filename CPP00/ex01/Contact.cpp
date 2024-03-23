/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:21:33 by lgirault          #+#    #+#             */
/*   Updated: 2023/07/19 15:55:04 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)/*Constructeur pour la classe Contact*/
{
	std::cout << "Constructor Contact called" << std::endl;
	return ;
}

Contact::~Contact(void)/*Destructeur pour la classe Contact*/
{
	std::cout << "Destructor Contact called" << std::endl;
	return ;
}

/*----------------------------------------Setters----------------------------------------*/

Contact&	Contact::set_index(int const& newIndex)
{
	_index = newIndex;
	return (*this);
}

Contact&	Contact::set_firstName(std::string const& firstName)
{
	_firstName = firstName;
	return (*this);
}

Contact&	Contact::set_lastName(std::string const& lastName)
{
	_lastName = lastName;
	return (*this);
}

Contact&	Contact::set_nickName(std::string const& nickName)
{
	_nickName = nickName;
	return (*this);
}

Contact&	Contact::set_phoneNumber(std::string const& phoneNumber)
{
	_phoneNumber = phoneNumber;
	return (*this);
}

Contact&	Contact::set_darkestSecret(std::string const& darkestSecret)
{
	_darkestSecret = darkestSecret;
	return (*this);
}

/*----------------------------------------Getters----------------------------------------*/

int	Contact::get_index(void) const
{
	return (_index);
}

std::string const&	Contact::get_firstName(void) const
{
	return (_firstName);
}

std::string const&	Contact::get_lastName(void) const
{
	return (_lastName);
}

std::string const&	Contact::get_nickName(void) const
{
	return (_nickName);
}

std::string const&	Contact::get_phoneNumber(void) const
{
	return (_phoneNumber);
}

std::string const&	Contact::get_darkestSecret(void) const
{
	return (_darkestSecret);
}
