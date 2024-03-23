/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 11:41:37 by lgirault          #+#    #+#             */
/*   Updated: 2023/11/09 14:40:25 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <exception>
#include <unistd.h>
#include <ctime>

Base::~Base(void)
{
	
}

Base*	generate(void)
{
	srand(clock());
	int i = rand();
	if (i % 3 == 0)
		return (new A());
	else if (i % 3 == 1)
		return (new B());
	else
		return (new C());
	return (NULL);
}

/*Dynamique cast se fait a l'execution et pas a la compilation il ne s'utilise
aussi que sur des class si le cast echoue alors dans le cas des pointeurs le cast
renverra NULL*/
void	identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "Class A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "Class B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "Class C" << std::endl;
	else
		std::cout << "No class" << std::endl;
}

/*Dynamique cast se fait a l'execution et pas a la compilation si le cast echoue
alors dans le cas des reference le cast jettera une exception*/
void	identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "Class A" << std::endl;
	}
	catch (std::exception const& e)
	{

	}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "Class B" << std::endl;
	}
	catch (std::exception const& e)
	{

	}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "Class C" << std::endl;
	}
	catch (std::exception const& e)
	{
		return;
	}
}