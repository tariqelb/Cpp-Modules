#ifndef Ice_H
# define Ice_H

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>

class Ice : public AMateria
{
	private :
		std::string	type;

	public :
		std::string const &	getType() const;
		Ice*				clone() const;
		void				use(ICharacter& target);
	
	Ice();
	Ice(std::string type);
	Ice(const Ice& rhs);
	Ice&	operator=(const Ice& rhs);
	~Ice();
};

#endif
