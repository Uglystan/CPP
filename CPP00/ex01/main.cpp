/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:05:50 by lgirault          #+#    #+#             */
/*   Updated: 2023/07/25 16:39:41 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc == 1)
	{
		PhoneBook	repertoire;
		std::string	option;
		
		while (1)
		{
			std::getline(std::cin, option);
			if (option == "EXIT")
				break;
			if (option == "ADD")
				repertoire.add();
			if (option == "SEARCH")
				repertoire.search();
			if (std::cin.eof())
			{
				std::cout << std::endl;
				return (0);
			}
		}
	}
}