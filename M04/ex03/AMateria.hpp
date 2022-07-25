#ifndef AMATERIA_H
# define AMATERIA_H

# include <iostream>
# include "ICharatcer.hpp"

class AMateria
{
	protected :
		std::string	type;

	puclic :
		std::string const &	getType() const;
		virtual AMateria*	clone() const = 0;
		virtual	void		use(ICharacter& target);

	AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria& rhs);
	AMateria&	operator=(const AMateria& rhs);
	~AMateria();
};

#endif
