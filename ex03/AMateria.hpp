#pragma once
#include <string>

#include "ICharacter.hpp"

class AMateria
{
	protected:
	std::string type;

	public:
	AMateria(std::string const & type);
	AMateria(const AMateria &copy);
	void operator=(const AMateria &ass);
	virtual ~AMateria();
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};