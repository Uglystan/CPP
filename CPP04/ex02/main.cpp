/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:10:49 by lgirault          #+#    #+#             */
/*   Updated: 2023/08/02 09:03:34 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


int main()
{
	//Animal a; //Error de compilation car classe animal est devenue abstraite

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	j->makeSound();
	i->makeSound();
	delete j;//should not create a leak
	delete i;

	return 0;
}