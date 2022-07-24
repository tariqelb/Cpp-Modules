#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
# include "Brain.hpp"

class Animal 
{
	protected :
		std::string	type;
	
	public :
		virtual void		makeSound(void) const;
		const std::string&	getType() const;
		virtual Brain*		getBrain() const = 0;

	Animal();
	Animal(std::string type);
	Animal(const Animal& rhs);
	Animal&	operator=(const Animal& rhs);
	virtual ~Animal();
};

#endif
