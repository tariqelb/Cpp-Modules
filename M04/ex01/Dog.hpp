#ifndef DOG_H
# define DOG_H

# include "Brain.hpp"

class Dog : public Animal
{
	private :
		Brain* br;

	public :
		void				makeSound(void) const;
		const std::string&	getType() const;	
		void				setType(std::string type);	

	Dog();
	Dog(std::string type);
	Dog(const Dog& rhs);
	Dog&	operator=(const Dog& rhs);
	~Dog();
};

#endif
