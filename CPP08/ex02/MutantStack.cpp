#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack()
{
	std::cout << "Constructor MutantStack called" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const& substitue)
{
	*this = substitue;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &substitue)
{
	if (this != &substitue)
	{
	}
	return (this);
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << "Destructor MutantStack called" << std::endl;
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	/*Ici on retourne l'iterator de stack et c.begin fait appel au container sous jacente de stack(deque) pour retourner un pointeur sur le debut*/
        return (std::stack<T>::c.begin());
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
        return (this->c.end());
}