#ifndef DOG.HPP
# define DOG.HPP

class Dog
{
	public :
		void	MakeSound(void);
	Dog();
	Dog(std::string type);
	Dog(const Dog& rhs);
	Dog&	operator=(const Dog& rhs);
	~Dog();
};

#endif
