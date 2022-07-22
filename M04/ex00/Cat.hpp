#ifndef CAT.HPP
# define CAT.HPP

class Cat
{
	public :
		void	MakeSound(void);
	Cat();
	Cat(std::string type);
	Cat(const Cat& rhs);
	Cat&	operator=(const Cat& rhs);
	~Cat();
};

#endif
