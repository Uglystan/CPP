/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:10:49 by lgirault          #+#    #+#             */
/*   Updated: 2023/08/07 09:40:39 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


/*Ici on cree un tableau de pointeur de type Animal pour pouvoir stocker les types
Dog ou Cat si on avait pas utilise de pointeur on aurait pas eu les bonnes fonctions
utilisee*/
int main()
{
	Animal	*tabAnimal[100];
	
	for(int i = 0; i < 50; i++)
	{
		tabAnimal[i] = new Dog();
	}
	for(int i = 50; i < 100; i++)
	{
		tabAnimal[i] = new Cat();
	}
	for(int i = 0; i < 100; i++)
	{
		tabAnimal[i]->makeSound();
	}
	for(int i = 0; i < 100; i++)
	{
		delete tabAnimal[i];
	}
	return 0;
}

/*Exemple de mauvais code*/
// int main()
// {
// 	Animal	tabAnimal[100];
	
// 	for(int i = 0; i < 50; i++)
// 	{
// 		tabAnimal[i] = *(new Dog());
// 	}
// 	for(int i = 50; i < 100; i++)
// 	{
// 		tabAnimal[i] = *(new Cat());
// 	}
// 	for(int i = 0; i < 100; i++)
// 	{
// 		tabAnimal[i].makeSound();
// 	}
// 	return 0;
// }

/*Ici on cree des pointeurs Animal pour que a l'execution on ait les bonnes
fonctions qui soit choisit pour makeSound par exemple c'est le polymorphisme
si on avait pas utilise de pointeur le makeSound aurait donne le sound de la classe animal
ici a l'execution l'ordinateur regarde ce au'il y'a a l'interieur et utilise la fonction
correspondante*/
// int main()
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	j->makeSound();
// 	i->makeSound();
// 	delete j;//should not create a leak
// 	delete i;

// 	return 0;
// }