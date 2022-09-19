/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:42:51 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/09/19 15:43:09 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <algorithm>
# include <iostream>

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
