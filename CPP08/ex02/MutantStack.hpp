#pragma once

#include <algorithm>
#include <string>
#include <iostream>
#include <stack>
#include <vector>

/*Enfaite le conteneur stack utilise le conteneur deque par defaut pour stocker ses elements on dit que deque et le*/
/*conteneur sous jacent on peut utiliser d'autre conteneur pour stack comme vector il suffit de declarer comme ceci*/
/*std::stack<int, std::vector<int>> myStack donc dans ici il faudrait remplacer "public std::stack<T>"*/
/*par "public : std::stack<T, std::vector<int>>" et fait d'autre modification du code notament pour begin et end*/
template<typename T>
class	MutantStack : public std::stack<T>
{
	public :
		MutantStack(void);
		MutantStack(MutantStack<T> const& substitue);
		MutantStack<T>& operator=(const MutantStack<T> &substitue);
		~MutantStack();
		/*Ici on definie pour tout le reste du prog que quand on aura iterator on remplacera par "std::stack<T>::container_type::iterator" qui est le conteneurs sous jacent de stack (deque)*/
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin();
		iterator end();
};

#include "MutantStack.cpp"