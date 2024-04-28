#include "Character.hpp"
#include <iostream>

Character::Character()
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	_name = "";
}

Character::Character(std::string name)
{
	_name = name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character &copy)
{
	*this = copy;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}

void Character::operator=(const Character &ass)
{
	_name = ass._name;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
		if (ass._inventory[i])
			_inventory[i] = ass._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
}

std::string const & Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	int i = 0;
	while (i < 4 && _inventory[i])
		i++;
	if (i < 4)
		_inventory[i] = m;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && _inventory[idx])
		_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && _inventory[idx])
		_inventory[idx]->use(target);
	else
		std::cout << "Invalid index" << std::endl;
}

