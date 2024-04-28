#include "Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure")
{
	return ;
}

Cure::Cure(const Cure &copy) : AMateria(copy)
{
	return ;
}

Cure::~Cure()
{
	return ;
}

void Cure::operator=(const Cure &ass)
{
	AMateria::operator=(ass);
	return ;
}

AMateria* Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

