#ifndef CAT_H
# define CAT_H

class Cat : public Animal
{
	public :
		void			makeSound(void) const;
		const std::string&	getType() const;

	Cat();
	Cat(std::string type);
	Cat(const Cat& rhs);
	Cat&	operator=(const Cat& rhs);
	~Cat();
};

#endif
