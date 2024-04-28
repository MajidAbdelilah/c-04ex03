#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria *_inventory[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &copy);
		void operator=(const MateriaSource &ass);
		~MateriaSource();
		void learnMateria(AMateria *m);
		AMateria *createMateria(std::string const & type);
};