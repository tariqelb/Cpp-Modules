/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:05:02 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/30 20:10:25 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default brain constructor called" << std::endl;
}

Brain::Brain(std::string ideas[100])
{
	int	index;

	index = 0;
	std::cout << "Overload brain constructor called" << std::endl;
	while (index < 100)
	{
		this->ideas[index] = ideas[index];
		index++;
	}
}

Brain::Brain(const Brain& rhs)
{
	std::cout << "Copy Brain constructor called" << std::endl;
	*this = rhs;
}

Brain& Brain::operator=(const Brain& rhs)
{
	int index;

	index = 0;
	std::cout << "Copy assignment Brain operator called" << std::endl;
	if (this != &rhs)
	{
		while (index < 100)
		{
			this->ideas[index] = rhs.ideas[index];
			index++;
		}
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Destructor of Brain called" << std::endl;
}

std::string	Brain::getIdea(int index)
{
	if (index >= 0 && index < 100)
		return (this->ideas[index]);
	else
		return ("Index out of range");
}

void	Brain::setIdea(int index, const std::string name)
{
	if (index >= 0 && index < 100)
	{
		this->ideas[index] = name;
	}
}
