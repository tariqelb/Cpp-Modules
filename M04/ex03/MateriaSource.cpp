#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "Default MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& rhs)
{
	std::cout << "copy MateriaSource constructor called" << std::endl;

}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs)
{
	std::cout << "copy assignment MateriaSource operator called" << std::endl;
	return (this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "destructor of MateriaSource called" << std::endl;
}

void	MateriaSource::learnMateria(AMateria* m)
{
	std::cout << "learn IMS materia" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	std::cout << "create IMateria" << std::endl;
	AMateria* tmp = new AMateria();
	return (tmp);
}
