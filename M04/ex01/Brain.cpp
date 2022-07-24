#include <iostream>
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

