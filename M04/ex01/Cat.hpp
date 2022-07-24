#ifndef CAT_H
# define CAT_H

# include "Brain.hpp"

class Cat : public Animal
{
	private :
		Brain* br;

	public :
		void				makeSound(void) const;
		const std::string&	getType() const;
		Brain*				&getBrain();

	Cat();
	Cat(std::string type);
	Cat(const Cat& rhs);
	Cat&	operator=(const Cat& rhs);
	~Cat();
};

#endif
