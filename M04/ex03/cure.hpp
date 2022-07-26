#ifndef CURE_H
# define CURE_H

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>

class Cure : public AMateria
{
	private :
		std::string	type;

	public :
		std::string const &	getType() const;
		Cure*				clone() const;
		void				use(ICharacter& target);

	Cure();
	Cure(std::string type);
	Cure(const Cure& rhs);
	Cure&	operator=(const Cure& rhs);
	~Cure();
};

#endif
