#ifndef DOG_H
# define DOG_H

# include "Brain.hpp"

class Dog : public Animal
{
	private :
		Brain* br;

	public :
		void			makeSound(void) const;
		const std::string&	getType() const;	
		Brain*			getBrain() const;

	Dog();
	Dog(std::string type);
	Dog(const Dog& rhs);
	Dog&	operator=(const Dog& rhs);
	~Dog();
};

#endif
