/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:21:35 by lgirault          #+#    #+#             */
/*   Updated: 2023/07/19 17:47:30 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define	CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	private:
		int	_index;
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
	public:
		Contact();
		~Contact();
		Contact&		set_index(int const& newIndex);
		Contact&		set_firstName(std::string const& firstName);
		Contact&		set_lastName(std::string const& lastName);
		Contact&		set_nickName(std::string const& nickName);
		Contact&		set_phoneNumber(std::string const& phoneNumber);
		Contact&		set_darkestSecret(std::string const& darkestSecret);
		int			get_index() const;
		std::string const&	get_firstName(void) const;
		std::string const&	get_lastName(void) const;
		std::string const&	get_nickName(void) const;
		std::string const&	get_phoneNumber(void) const;
		std::string const&	get_darkestSecret(void) const;
};

#endif
