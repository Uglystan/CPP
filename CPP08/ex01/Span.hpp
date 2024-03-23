#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>
#include <numeric>
#include <cstdlib>

class	Span
{
	public :
		Span(unsigned int N);
		Span(Span const& substitue);
		~Span(void);
		Span&	operator=(Span const& subsitue);
		void	addNumber(int number);
		int	shortestSpan();
		int	longestSpan();
		void	fillSpan(unsigned int nbr, unsigned int max);
		class	SizeMaxException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
		class	NumbNotFoundException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
	private :
		unsigned int	_N;
		std::vector<int>	_tab;	
};

#endif