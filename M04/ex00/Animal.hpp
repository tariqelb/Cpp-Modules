#ifndef ANIMAL_H
# define ANIMAL_H

class Animal 
{
	protected :
		std::string	type;
	public :
		void	MakeSound(void);
	
	Animal();
	Animal(std::string type);
	Animal(const std::string& rhs)
	Animal&	operator(const std::string& rhs);
	~Animal();
};

#endif
