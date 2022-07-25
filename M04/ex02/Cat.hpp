#ifndef CAT_H
# define CAT_H

# include "Brain.hpp"

class Cat : public Animal
{
	private :
		Brain*	br;

	public :
		const std::string&	getType(void) const;
		void			makeSound(void) const;
		Brain*			&getBrain(void);

	Cat();
	Cat(std::string type);
	Cat(const Cat& rhs);
	Cat&	operator=(const Cat& rhs);
	~Cat();
};

#endif
