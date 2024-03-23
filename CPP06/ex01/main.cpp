/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:24:39 by lgirault          #+#    #+#             */
/*   Updated: 2023/11/23 11:26:40 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
/*On utilise reintrpret_cast dans le cas de pointeur on va pouvoir changer le type
de pointeur exemple passer d'un pointeur int a un pointeur double donc le pointeur
pointera a l'endroit ou la variable int est stockee il faut utiliser ce proceder
avec precaution car il est source d'erreur car int et double ont des representation
en memoire differente. On utilise par exemple pour convertir les double en float et
vice-versa on va aussi pouvoir passer d'un int en hexa a un pointeur expemple on entre
un int en hexa on converti en pointeur et on affiche la valeur contenue a cette adresse
memoire*/
int main()
{
	Data* ptr = new Data();
	ptr->nbr = 12;
	std::cout << "Valeur du pointeur : " << ptr << std::endl;
	uintptr_t s = Serializer::serialize(ptr);
	std::cout << "Apres Serialize adresse de pointeur converti en uintptr_t : " << s << std::endl;
	std::cout << "Apres Deserialize adresse du pointeur en hexa : " << Serializer::deserialize(s) << std::endl;
	std::cout << "Le nombre dans la stucture : " << ptr->nbr << std::endl;
	delete ptr;
}