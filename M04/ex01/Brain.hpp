#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class	Brain
{
	private :
		std::string	ideas[100];
	
	public :
	
	Brain();
	Brain(std::string type[100]);
	Brain(const Brain& rhs);
	Brain&	operator=(const Brain& rhs);
	~Brain();
};

#endif
