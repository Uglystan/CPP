/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 12:07:46 by lgirault          #+#    #+#             */
/*   Updated: 2023/11/23 11:35:59 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main()
{
	Base* p = generate();
	Base &r = *generate();
	Base &pr = *p;
	Base* rp = &r;
	std::cout << "Type de classe du pointeur : ";
	identify(p);
	std::cout << "Type de classe de la reference set avec le pointeur : ";
	identify(pr);
	std::cout << "Type de classe de la reference : ";
	identify(r);
	std::cout << "Type de classe du pointeur set avec la reference : ";
	identify(rp);
	delete p;
	delete &r;
}