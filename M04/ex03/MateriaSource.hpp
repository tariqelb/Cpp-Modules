#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include <string>

# include "Ice.hpp"
# include "Cure.hpp"
class Ice;
class Cure;

class	MateriaSource : public IMateriaSource
{
	//private :
	 //  AMateria* m

	public :
		void		learnMateria(AMateria* m);
 		AMateria*	createMateria(std::string const & type);

	MateriaSource();
	MateriaSource(const MateriaSource& rhs);
	MateriaSource& operator=(const MateriaSource& rhs);
	~MateriaSource();
};

#endif
