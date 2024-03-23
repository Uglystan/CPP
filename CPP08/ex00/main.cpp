/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 14:14:46 by lgirault          #+#    #+#             */
/*   Updated: 2023/12/14 10:30:59 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <vector>
#include <deque>

int main()
{
	std::vector<int>	tab;
	for(int i = 0; i <= 8; i++)
		tab.push_back(i);
	if (easyfind(tab, 5) != tab.end())
		std::cout << "Value found : " << *easyfind(tab, 5) << std::endl;
	else
		std::cout << "Value not found" << std::endl;
}