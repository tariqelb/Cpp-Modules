#ifndef CURE_H
# define CURE_H

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>

class cure : public AMateria
{
	private :
		std::string	type;

	public :
		std::string const &	gettype() const;
		cure*				colne() const;
		void				use(ICharacter& target);

	cure();
	cure(std::string type);
	cure(const cure& rhs);
	cure&	operator=(const cure& rhs);
	~cure();
};

#endif
