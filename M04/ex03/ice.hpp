#ifndef ICE_H
# define ICE_H

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>

class ice : public AMateria
{
	private :
		std::string	type;

	public :
		std::string const &	gettype() const;
		ice*				colne() const;
		void				use(ICharacter& target);
	
	ice();
	ice(std::string type);
	ice(const ice& rhs);
	ice&	operator=(const ice& rhs);
	~ice();
};

#endif
