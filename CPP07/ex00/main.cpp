/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 16:01:05 by lgirault          #+#    #+#             */
/*   Updated: 2023/11/23 14:23:25 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

// class Awesome
// {
// 	public:
// 		Awesome(void):_n(0)
// 		{}
// 		Awesome(int n):_n(n)
// 		{}
// 		Awesome & operator=(Awesome & a)
// 		{
// 			_n=a._n;
// 			return (*this);
// 		} 
// 		bool operator==(Awesome const & rhs) const 
// 		{
// 			return(this->_n == rhs._n);
// 		}
// 		bool operator!=(Awesome const & rhs) const
// 		{
// 			return(this->_n != rhs._n);
// 		}
// 		bool operator>(Awesome const & rhs) const 
// 		{
// 			return(this->_n > rhs._n);
// 		}
// 		bool operator<(Awesome const & rhs) const 
// 		{
// 			return(this->_n < rhs._n);
// 		}
// 		bool operator>=(Awesome const & rhs) const 
// 		{
// 			return(this->_n >= rhs._n);
// 		}
// 		bool operator<=(Awesome const & rhs) const 
// 		{
// 			return(this->_n <= rhs._n);
// 		}
// 		int get_n() const 
// 		{
// 			return _n;
// 		}
// 		private:
// 			int _n;
// };
// std::ostream & operator<<(std::ostream & o, const Awesome &a)
// {
// 	o << a.get_n();
// 	return o;
// }

/*Le concept de template est de pouvoir envoyer n'importe quel type a une fonction
tant quelle est prototype comme il faut (template <typename T>) et que cette fonction
marche sans probleme cela evite de recreer plein de fonction identique avec le seulement
des type d'argument different ici swap peut prendre n'importe quelle type*/
int main( void ) {
	int a = 2;
	int b = 3;
	swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	int *ptr_a = &a;
	int *ptr_b = &b;
	std::cout << "Before swap ptr_a = " << ptr_a << ", ptr_b = " << ptr_b << std::endl;
	std::cout << "Before swap ptr_a point on " << *ptr_a << ", ptr_b = " << *ptr_b << std::endl;
	swap(ptr_a, ptr_b);
	std::cout << "After swap ptr_a = " << ptr_a << ", ptr_b = " << ptr_b << std::endl;
	std::cout << "After swap ptr_a point on " << *ptr_a << ", ptr_b = " << *ptr_b << std::endl;
	return 0;
}

// int main(void)
// {
// 	Awesome a(2), b(4); swap(a,b);
// 	std::cout << a << " " << b << std::endl;
// 	std::cout << max(a,b) << std::endl;
// 	std::cout << min(a,b) << std::endl;
// 	return (0);
// }