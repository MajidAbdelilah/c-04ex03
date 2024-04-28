#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
	Cure();
	Cure(const Cure &copy);
	~Cure();
	void operator=(const Cure &ass);
	AMateria* clone() const;
	void use(ICharacter& target);
};