#ifndef WRONGCAT_H
# define WRONGCAT_H

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public :
		void			makeSound(void) const;
		const std::string	getType(void) const;

	WrongCat();
	WrongCat(std::string type);
	WrongCat(const WrongCat& rhs);
	WrongCat& operator=(const WrongCat& rhs);
	~WrongCat();
};

#endif
