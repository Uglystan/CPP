#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <string>
#include <iostream>
#include <exception>
#include <algorithm>

/*Amelioraiton regarder sur cppreference le code exemple de max_element pour avoir
la position de ou se trouve le nombre avec std::distance*/
template<typename T>
typename T::iterator	easyfind(T &a, int b)
{
	if (std::find(a.begin(), a.end(), b) != a.end())
		return (std::find(a.begin(), a.end(), b));
	else
		return (a.end());
}

#endif