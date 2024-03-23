/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 13:23:35 by lgirault          #+#    #+#             */
/*   Updated: 2023/11/23 14:41:06 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

/*Ici on doit defenir les methodes d'une classe template dans le .hpp
il faut rappeler le typename ainsi aue mette Array<T> devant pour
eagalement rappeler que on utilise une classe template*/
template<typename T>
Array<T>::Array(void)
{
	_size = 0;
	_array = new T[0];
	std::cout << "Array constructor called" << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	_size = n;
	_array = new T[n];
	/*Ici on venir initialiser le tableau avec la valeur par default
	du template c'est tres important sinon le tableau de base ne sera
	pas initialise donc T() initialise avec la valeur par default
	de T */
	for(unsigned int i = 0; i < _size; i++)
		_array[i] = T();
	std::cout << "Array constructor with parameter called" << std::endl;
}

template<typename T>
Array<T>::Array(Array const& substitue)
{
	_size = substitue._size;
	_array = new T[substitue._size];
	for (unsigned int i = 0; i < substitue._size; i++)
		_array[i] = substitue._array[i];
	std::cout << "Array copie constructor called" << std::endl;
}

template<typename T>
Array<T>&	Array<T>::operator=(Array<T> const& substitue)
{
	if (this != &substitue)
	{
		_size = substitue._size;
		delete[] _array;
		_array = new T[substitue._size];
		for (unsigned int i = 0; i < substitue._size; i++)
			_array[i] = substitue._array[i];
	}
	std::cout << "Array assignement operator called" << std::endl;
	return (*this);
}

template<typename T>
Array<T>::~Array(void)
{
	delete[] _array;
	std::cout << "Array destructor called" << std::endl;
}

/*Ici si l'index n'est pas bon on jette une exception sinon on retourne
une reference sur le type donc on va pouvoir acceder au variable dans
le tableau et meme modifier si on fait dans le main array[i] = ...*/
template<typename T>
T&	Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
		throw InvalidINdexException();
	return (_array[index]);
}

template<typename T>
const char *	Array<T>::InvalidINdexException::what(void) const throw()
{
	return ("Error invalid index");
}

template<typename T>
unsigned int	Array<T>::size(void) const
{
	return (_size);
}