#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <algorithm>
# include <iostream>
# include <typeinfo>

template <typename T>
class MutantStack : public std::stack<T>
{
	private:
	
	public:
		
	MutantStack()
	{
		std::cout << "Mutant stack constructor called" << std::endl;
	}

	MutantStack(const MutantStack& rhs)
	{
		*this = rhs;
	}

	MutantStack&	operator=(const MutantStack& rhs)
	{
		if (this != &rhs)
		{
			this->c = rhs.c;
		}
		return (*this);
	}

	~MutantStack()
	{
		std::cout << "Mutant stack destructor called" << std::endl;
	}	

	typedef	typename std::stack<T>::container_type::iterator	iterator;
	
	iterator	begin(void)
	{
		return (this->c.begin());
	}
	iterator	end(void)
	{
		return (this->c.end());
	}

};

#endif
