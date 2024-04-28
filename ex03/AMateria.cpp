#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}
AMateria::AMateria(const AMateria &copy)
{
	*this = copy;
}
void AMateria::operator=(const AMateria &ass)
{
	this->type = ass.type;
}

AMateria::~AMateria()
{
	return ;
}
std::string const & AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	return ;
}