/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 16:01:05 by lgirault          #+#    #+#             */
/*   Updated: 2023/11/23 14:34:05 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>

/*Foncteur grace a la redefinition de l'operateur () qui va faire agir comme une fonction*/
// struct Print
// {
// 	Print(int y): _y(y){};
// 	void operator()(int& x)
// 	{
// 		_y++;
// 		std::cout << x << std::endl;
// 		std::cout << _y << std::endl;
// 	}

// 	private:
// 		int _y;
// };

// class Awesome
// {
// 	public:
// 		Awesome(void):_n(42)
// 		{
// 			return;
// 		}
// 		int get(void) const 
// 		{
// 			return this->_n;
// 		}
// 	private:
// 		int _n;		
// };
// std::ostream & operator<<(std::ostream & o, Awesome const & rhs)
// {
// 	o << rhs.get();
// 	return o;
// }
// template <typename T>
// void print(T const & x)
// {
// 	std::cout << x << std::endl;
// 	return;
// }

// int main(void)
// {
// 	int tab[] = {0, 1, 2, 3, 4};
// 	Awesome tab2[5];
// 	iter (tab, 5, print<int>);
// 	iter (tab2, 5, print<Awesome>);
// }

int main( void )
{
	int	tab_int[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	char	tab_char[] = {'S', 'a', 'l', 'u', 't'};

	/*Ici il faut preciser le type car la resolution automatique du compilateur
	ne fonctionne pas et on ne peut pas utiliser c++11 avec auto*/
	iter(tab_int, 10, fct<int>);
	iter(tab_int, 10, fct2<int>);
	iter(tab_char, 5, fct<char>);
	iter(tab_char, 5, fct2<char>);
}