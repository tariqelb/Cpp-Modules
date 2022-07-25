#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class Animal
{
	protected :
		std::string	type;
	public :
		virtual const std::string&	getType(void) const = 0;
		virtual void			makeSound(void) const = 0;
	
	Animal();
	Animal(const Animal& rhs);
	Animal&	operator=(const Animal& rhs);
	virtual ~Animal();
};

#endif
