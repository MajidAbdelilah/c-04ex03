#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice")
{
	return ;
}

Ice::Ice(const Ice &copy) : AMateria(copy)
{
	return ;
}

Ice::~Ice()
{
	return ;
}

void Ice::operator=(const Ice &ass)
{
	AMateria::operator=(ass);
	return ;
}

AMateria* Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

