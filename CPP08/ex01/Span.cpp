/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 16:27:18 by lgirault          #+#    #+#             */
/*   Updated: 2023/12/14 12:05:17 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _N(N)
{
	std::cout << "Span constructor called" << std::endl;
}

Span::Span(Span const& substitue)
{
	_N = substitue._N;
	_tab = substitue._tab;
	std::cout << "Span copie constructor called" << std::endl;
}

Span&	Span::operator=(Span const& substitue)
{ 
	if (this != &substitue)
	{
		_N = substitue._N;
		_tab = substitue._tab;
	}
	return (*this);
};

Span::~Span(void)
{
	std::cout << "Span destructor called" << std::endl;
}

void	Span::addNumber(int number)
{
	if (_tab.size() + 1 > _N)
		throw SizeMaxException();
	_tab.push_back(number);
}

const char*	Span::SizeMaxException::what() const throw()
{
	return ("Error : can't add size max reached");
}

const char*	Span::NumbNotFoundException::what() const throw()
{
	return ("Error : No number match or only one or zero number");
}


int Span::longestSpan()
{
	if (_tab.size() <= 1)
		throw NumbNotFoundException();
	std::vector<int>::iterator maxElem = std::max_element(_tab.begin(), _tab.end());
	std::vector<int>::iterator minElem = std::min_element(_tab.begin(), _tab.end());
	return (*maxElem - *minElem);
}

// int Span::shortestSpan()
// {
// 	if (_tab.size() <= 1)
// 		throw NumbNotFoundException();
// 	int	value = *_tab.begin();

// 	for (std::vector<int>::iterator first = _tab.begin(); first != _tab.end(); first++)
// 	{
// 		for(std::vector<int>::iterator it = first + 1; it != _tab.end(); ++it)
// 		{
// 			value = std::min(value, abs(*it - *first));
// 		}
// 	}
// 	return (value);
// }

int Span::shortestSpan()
{
	if (_tab.size() <= 1)
		throw NumbNotFoundException();
	std::vector<int>	copie = _tab;
	// for(std::vector<int>::iterator begin = copie.begin(); begin != copie.end(); begin++)
	// {
	// 	std::cout << *begin << " ";
	// }
	// std::cout << std::endl;
	std::sort(copie.begin(), copie.end());
	// for(std::vector<int>::iterator begin = copie.begin(); begin != copie.end(); begin++)
	// {
	// 	std::cout << *begin << " ";
	// }
	// std::cout << std::endl;
	std::adjacent_difference(copie.begin(), copie.end(), copie.begin());
	// for(std::vector<int>::iterator begin = copie.begin(); begin != copie.end(); begin++)
	// {
	// 	std::cout << *begin << " ";
	// }
	// std::cout << std::endl;
	return (*std::min_element(copie.begin() + 1, copie.end()));
}

void Span::fillSpan(unsigned int nbr, unsigned int max)
{
	while (nbr != 0)
	{
		addNumber(rand() % max + 1);
		nbr--;
	}
}