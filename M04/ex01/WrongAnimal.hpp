#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <iostream>

class WrongAnimal
{
	protected :
		std::string	type;

	public :
		void			makeSound(void) const;
		const std::string&	getType(void) const;

	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal& rhs);
	WrongAnimal& operator=(const WrongAnimal& rhs);
	virtual ~WrongAnimal();
};

#endif
