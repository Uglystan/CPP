#include "MateriaCure.hpp"
#include "MateriaIce.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "ICharacter.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new MateriaIce());
	src->learnMateria(new MateriaCure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}

// int main()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new MateriaIce());
// 	src->learnMateria(new MateriaCure());
// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	ICharacter* bob = new Character("bob");
// 	tmp = src->createMateria("fire");//creer invalide materia
// 	bob->equip(tmp);//equiper une materia invalide
// 	tmp = src->createMateria("cure");
// 	bob->equip(tmp);
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	me->use(2, *bob);//utiliser un endroit qui n'existe pas
// 	bob->use(0, *me);
// 	bob->unequip(0);
// 	me->unequip(2);//Unequipe un endroit qui n'existe pas
// 	delete bob;
// 	delete me;
// 	delete src;
// 	delete tmp;
// 	return 0;
// }
