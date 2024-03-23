/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:21:44 by lgirault          #+#    #+#             */
/*   Updated: 2023/07/25 16:43:04 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _index(0)
{
	std::cout << "Constructor PhoneBook called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Destructor PhoneBook called" << std::endl;
	return ;
}

std::string const	PhoneBook::_fillInfo(std::string question) const
{
	std::string	answer;

	std::cout << question << std::endl;
	std::getline(std::cin, answer);
	return (answer);
}

void	PhoneBook::add()
{
	_tabContact[_index % 8].set_index((_index % 8) + 1).set_firstName(_fillInfo("First name ?")).set_lastName(_fillInfo("Last name ?")).set_nickName(_fillInfo("Nickname ?")).set_phoneNumber(_fillInfo("Phone number ?")).set_darkestSecret(_fillInfo("Darkest secret ?"));
	_index++;
}

void	PhoneBook::_printTruncInfo(std::string strInfo) const
{
	if (strInfo.length() == 10)
		std::cout << strInfo.substr(0, 10) << "|";
	if (strInfo.length() > 10)
		std::cout << strInfo.substr(0, 9) << ".|";
	if (strInfo.length() < 10)
		std::cout << std::setw(10) << strInfo << "|";
}

void	PhoneBook::_printInfo(Contact const& contact) const
{
	std::cout << "First name : " << contact.get_firstName() << std::endl;
	std::cout << "Last name : " << contact.get_lastName() << std::endl;
	std::cout << "Nickname : " << contact.get_nickName() << std::endl;
	std::cout << "Phone number : " << contact.get_phoneNumber() << std::endl;
	std::cout << "Darkest secret : " << contact.get_darkestSecret() << std::endl;
}

void	PhoneBook::search(void) const
{
	int	i = 0;
	int	affiche = (_index < 8) ? (_index) : 8;
	std::string	choixIndex;
	
	while (i < affiche)
	{
		std::cout << "|" << std::setw(10) << _tabContact[i].get_index() << "|";
		_printTruncInfo(_tabContact[i].get_firstName());
		_printTruncInfo(_tabContact[i].get_lastName());
		_printTruncInfo(_tabContact[i].get_nickName());
		std::cout << std::endl;
		i++;
	}
	if (i == 0)
	{
		std::cout << "No contact !" << std::endl;
		return ;
	}
	while(std::isdigit(choixIndex[0]) == 0 || (std::atoi(choixIndex.c_str()) > affiche || std::atoi(choixIndex.c_str()) <= 0))
	{
		std::cout << "Index ? (Between 1 - " << affiche << ")" << std::endl;
		std::getline(std::cin, choixIndex);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return ;
		}
	}
	_printInfo(_tabContact[(std::atoi(choixIndex.c_str())) - 1]);
}