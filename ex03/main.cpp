#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>


int main()
{
	IMateriaSource* src = new MateriaSource();
	const int arrSize = 16;
	AMateria *arr[arrSize];
	int i = 0;
	while(i < arrSize)
	{
		arr[i] = NULL;
		i++;
	}
	i = 0;
	while(i < 5)
	{
		arr[i] = new Ice();
		i++;
		if(!(i < 5))
			break ;
		arr[i] = new Cure();
		i++;
	}

	src->learnMateria(arr[0]);
	src->learnMateria(arr[1]);
	src->learnMateria(arr[2]);
	src->learnMateria(arr[3]);
	src->learnMateria(arr[4]);
	src->learnMateria(arr[5]);

	ICharacter* me = new Character("me");
	
	arr[5] = src->createMateria("ice");
	me->equip(arr[5]);
	arr[6] = src->createMateria("cure");
	me->equip(arr[6]);
	arr[7] = src->createMateria("ice");
	me->equip(arr[7]);
	arr[8] = src->createMateria("cure");
	me->equip(arr[8]);

	arr[9] = src->createMateria("ice");
	me->equip(arr[9]);
	arr[10] = src->createMateria("ice");
	me->equip(arr[10]);
	arr[11] = src->createMateria("ice");
	me->equip(arr[11]);
	

	

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);
	me->use(5, *bob);
	me->use(-10, *bob);
	
	for(int j = 0; j < 2; j++)
		for(int i = -1; i < 5; i++)
			me->unequip(i);
	
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	std::cout << "name:" << me->getName() << "\n";
	delete bob;
	delete me;
	delete src;
	
	i = 4;
	while(i < arrSize)
	{
		if(arr[i])
			delete arr[i];
		i++;
	}
	return 0;
}