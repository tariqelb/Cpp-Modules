#ifndef CHARACTER_H
# define CHARACTER_H

# include "ICharacter.hpp"

class Character : public ICharacter
{
	private :
		std::string	name;
	
	public :
		std::string const & getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);

	Character();
	Character(std::string name);
	Character(const Character& rhs);
	Character&	operator=(const Character& rhs);
	~Chracter();
};

#endif
