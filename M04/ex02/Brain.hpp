#ifndef BRAIN_H
# define BRAIN_H

class Brain
{
	private :
		std::string	ideas[100];

	public :
		std::string	getIdea(int index);
		void		setIdea(int index, const std::string);
	
	Brain();
	Brain(std::string ideas[100]);
	Brain(const Brain& rhs);
	Brain&	operator=(const Brain& rhs);
	~Brain();
};

#endif
