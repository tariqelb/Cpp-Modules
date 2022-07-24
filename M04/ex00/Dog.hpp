#ifndef DOG_H
# define DOG_H

class Dog : public Animal
{
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
