#pragma once
#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice &copy);
		~Ice();
		void operator=(const Ice &ass);
		AMateria* clone() const;
		void use(ICharacter& target);
};