#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class Animal 
{
	protected :
		std::string	type;
	
	public :
		virtual void		makeSound(void) const;
		const std::string&	getType() const;

	Animal();
	Animal(std::string type);
	Animal(const Animal& rhs);
	Animal&	operator=(const Animal& rhs);
	virtual ~Animal();
};

#endif
