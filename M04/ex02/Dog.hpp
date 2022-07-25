#ifndef DOG_H
# define DOG_H

# include "Brain.hpp"

class Dog : public Animal
{
	private :
		Brain*	br;

	public :
		const std::string&	getType(void) const;
		void			makeSound(void) const;
		Brain*			&getBrain(void);
	
	Dog();
	Dog(std::string type);
	Dog(const Dog& rhs);
	Dog&	operator=(const Dog& rhs);
	~Dog();
};

#endif
