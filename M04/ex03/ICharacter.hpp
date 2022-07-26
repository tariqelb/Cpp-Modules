#ifndef ICHARACTER_H
# define ICHARACTER_H

# include "AMateria.hpp"

class ICharacter
{
	protected :
		std::string	name;

	public :
		virtual std::string const &	getName() const = 0;
		virtual void				equip(AMateria* m) = 0;
		virtual void				unequip(int idx) = 0;
		virtual void				use(int idx, ICharacter& target) = 0;

	ICharacter();
	ICharacter(const ICharacter& rhs);
	ICharacter& operator=(const ICharacter& rhs);
	~ICharacter();
};

#endif
