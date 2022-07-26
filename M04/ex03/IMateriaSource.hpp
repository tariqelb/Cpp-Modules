#ifndef IMATERIASOURCE_H
# define IMATERIASOURCE_H

# include "AMateria.hpp"

class IMateriaSource
{
	//protected :
	//	AMateria* m;

	public :		
		virtual void		learnMateria(AMateria* m) = 0;
		virtual AMateria*	createMateria(std::string const & type) = 0;

	IMateriaSource();
	IMateriaSource(const IMateriaSource& rhs);
	IMateriaSource& operator=(const IMateriaSource& rhs);
	virtual ~IMateriaSource();
};

#endif
